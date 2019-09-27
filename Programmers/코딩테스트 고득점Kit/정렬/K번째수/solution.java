import java.util.*;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int commandsLen = commands.length;
        int[] answer = new int[commandsLen];
        
        for(int c=0; c<commandsLen; ++c){
            int i = commands[c][0];
            int j = commands[c][1];
            int k = commands[c][2];
            
            int[] temp = Arrays.copyOfRange(array, i-1, j);
            Arrays.sort(temp);
            answer[c] = temp[k-1];
        }
        
        return answer;
    }
}