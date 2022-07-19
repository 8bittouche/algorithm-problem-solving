import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        Map<Character, Integer> map = new HashMap<>();

        for(int i=0; i<magazine.length(); i++){
            char mc = magazine.charAt(i);

            if(map.get(mc) != null){
                int mv = map.get(mc);
                map.replace(mc, ++mv);
            }else{
                map.put(mc, 1);
            }
        }

        for(int i=0; i<ransomNote.length(); i++){
            char rc = ransomNote.charAt(i);

            if(map.get(rc) != null){
                int rv = map.get(rc);
                if(rv <= 0){
                    return false;
                }

                map.replace(rc, --rv);
            }else{
                return false;
            }
        }

        return true;
    }
}