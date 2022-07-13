import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> a = new ArrayList<>(n);

        for(int i=1; i<=n; i++){
            boolean divisibleBy3 = i % 3 == 0;
            boolean divisibleBy5 = i % 5 == 0;

            if(divisibleBy3 && divisibleBy5) {
                a.add("FizzBuzz");
            } else if (divisibleBy3) {
                a.add("Fizz");
            } else if (divisibleBy5) {
                a.add("Buzz");
            } else {
                a.add(String.valueOf(i));
            }
        }

        return a;
    }

    // Time Complexity : O(n)
    // Space Complexity : O(1)
}

