class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(dict.find(target - nums[i]) != dict.end()){
                ans.push_back(dict[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            dict[nums[i]] = i;
        }
        return ans;
    }
};
