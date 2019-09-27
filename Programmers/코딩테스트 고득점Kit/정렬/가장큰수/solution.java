import java.util.Collections;
import java.util.List;
import java.util.ArrayList;
import java.util.Comparator;
class Solution {
    public String solution(int[] numbers) {
        String answer = "";
        
        List<String> list = new ArrayList<>();
        for(int num : numbers){
            list.add(String.valueOf(num));
        }
        
        Collections.sort(list, new Comparator<String>(){
            @Override
            public int compare(String a, String b){
                int aa = Integer.parseInt(a+b);
                int bb = Integer.parseInt(b+a);
                return bb - aa;
            }
        });
        
        StringBuilder sb = new StringBuilder();
        for(String s : list){
            sb.append(s);
        }
        answer = sb.toString();
        
        if(answer.charAt(0)=='0'){
            answer = "0";
        }
        return answer;
    }
    
    
}