import java.util.*;
class Solution {
    public int[] solution(int[] answers) {
        int[] answer;
        int[] score = new int[3];
                
        int[] one = {1,2,3,4,5};
        int[] two = {2,1,2,3,2,4,2,5};
        int[] three = {3,3,1,1,2,2,4,4,5,5};
        
        int numOne=0, numTwo=0, numThree=0;
        int len = answers.length;
        for(int i=0; i<len; ++i){
            if(one[i%5]==answers[i]){  score[0]++;  }
            if(two[i%8]==answers[i]){  score[1]++;  }
            if(three[i%10]==answers[i]){  score[2]++;  }
        }
                
        int max = Math.max(score[0], Math.max(score[1], score[2]));
        
        List<Integer> list = new ArrayList<>();
        if(max == score[0]) list.add(1);
        if(max == score[1]) list.add(2);
        if(max == score[2]) list.add(3);
        
        answer = new int[list.size()];
        for(int i=0; i<list.size(); ++i){
            answer[i] = list.get(i);    
        }
        
        return answer;
    }
}