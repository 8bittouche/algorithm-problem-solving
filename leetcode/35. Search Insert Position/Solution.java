class Solution {
    public int func(int[] nums, int target, int startIdx, int endIdx){
        int midIdx = (startIdx + endIdx) / 2;

        if(nums[midIdx] == target){
            return midIdx;
        }

        if(midIdx == startIdx){
            if(nums[startIdx] < target && target <= nums[endIdx]){
                return endIdx;
            }else if(nums[startIdx] >= target){
                return startIdx;
            }else{
                return endIdx + 1;
            }
        }

        if(nums[midIdx] < target){
            return func(nums, target, midIdx, endIdx);
        }else{
            return func(nums, target, startIdx, midIdx);
        }
    }

    public int searchInsert(int[] nums, int target) {
        return func(nums, target, 0, nums.length-1);
    }
}