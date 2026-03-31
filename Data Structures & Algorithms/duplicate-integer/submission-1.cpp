class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //first thought: Use dictionary,don't know how to use it
        // use an array to save the nums,once repeat then return false
        if(nums.size() < 1)
            return false;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1;j < nums.size(); j++){
                if(nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};