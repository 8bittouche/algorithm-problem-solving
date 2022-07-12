class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;

        for(int[] customer : accounts){
            int sum = 0;

            for(int bank : customer){
                sum += bank;
            }

            max = Math.max(max, sum);
        }

        return max;
    }

    // Time Complexity = O(n x m)
    // Space Complexity = O(1)
}