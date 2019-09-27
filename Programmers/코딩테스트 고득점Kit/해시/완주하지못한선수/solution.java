import java.util.*;
class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        Map<String, Integer> hm = new HashMap<>();
        
        for(String player : participant){
            if(hm.get(player)==null){
                hm.put(player, 1);    
            }
            else{
                hm.put(player, hm.get(player)+1);
            }
        }
        
        for(String player : completion){
            hm.put(player, hm.get(player)-1);
        }
        
        for(Map.Entry<String, Integer> entry : hm.entrySet()){
            if(entry.getValue() != 0){
                answer += entry.getKey();
                break;
            }
        }
        
        return answer;
    }
}