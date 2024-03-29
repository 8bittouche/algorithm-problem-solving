class Solution {
    public int numberOfSteps(int num) {
        int steps = 0;

        while(num > 0){
            if((num & 1) == 0){
                num >>= 1;
            }else{
                num -= 1;
            }

            steps++;
        }

        return steps;
    }

    // Time Complexity : O(logn)
    // Space Complexity : O(1)
}