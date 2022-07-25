class Solution {
    public int climbStairs(int n) {
        if(n <= 1){
            return 1;
        }

        int prev1 = 1;
        int prev2 = 2;

        for(int i=3; i<=n; i++){
            int v = prev1 + prev2;
            prev1 = prev2;
            prev2 = v;
        }

        return prev2;
    }
}


// Time Complexity : O(n)
// Space Complexity : O(1)