import java.util.HashMap;
import java.util.Map;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] ans = new int[2];
        Map<Integer, Integer> map = new HashMap<>();

        for(int i=0; i<nums.length; i++){
            int targetMinusOne = target - nums[i];
            if(map.containsKey(targetMinusOne)){
                ans[0] = i;
                ans[1] = map.get(targetMinusOne);

                return ans;
            }
            map.put(nums[i], i);
        }

        return ans;
    }
}