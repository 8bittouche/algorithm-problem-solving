class Solution {
    public int[] runningSum(int[] nums) {
        int len = nums.length;
        int[] sums = new int[len];

        for(int i=0; i<len; i++){
            for(int j=0; j<=i; j++){
                sums[i] += nums[j];
            }
        }

        return sums;
    }
}