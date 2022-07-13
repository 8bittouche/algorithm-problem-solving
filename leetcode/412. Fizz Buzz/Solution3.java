import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> a = new ArrayList<>(n);

        for(int i=1; i<=n; i++){
            boolean divisibleBy3 = i % 3 == 0;
            boolean divisibleBy5 = i % 5 == 0;

            String currStr = "";

            if(divisibleBy3) {
                currStr += "Fizz";
            }

            if(divisibleBy5) {
                currStr += "Buzz";
            }

            if(currStr.isEmpty()) {
                currStr += String.valueOf(i);
            }

            a.add(currStr);
        }

        return a;
    }

    // Time Complexity : O(n)
    // Space Complexity : O(1)
}

