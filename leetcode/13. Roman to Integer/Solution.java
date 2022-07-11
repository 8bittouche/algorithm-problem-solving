import java.util.HashMap;

class Solution {
    public int romanToInt(String s){
        int ans = 0;
        int sLen = s.length();
        String[] strArr = s.split("");
        HashMap<String, Integer> map = new HashMap<String, Integer>();

        map.put("I", 1);
        map.put("V", 5);
        map.put("X", 10);
        map.put("L", 50);
        map.put("C", 100);
        map.put("D", 500);
        map.put("M", 1000);

        for(int i=0; i<sLen; i++){
            if(i <sLen-1 && ((strArr[i].equals("I") && (strArr[i+1].equals("V") || strArr[i+1].equals("X"))) ||
                    (strArr[i].equals("X") && (strArr[i+1].equals("L") || strArr[i+1].equals("C"))) ||
                    (strArr[i].equals("C") && (strArr[i+1].equals("D") || strArr[i+1].equals("M"))))){

                ans -= map.get(strArr[i]);
                continue;
            }

            ans += map.get(strArr[i]);
        }

        return ans;
    }
}