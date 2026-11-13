class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dict;
        for(auto &i : nums){
            if(dict.find(i) != dict.end())
                return true;
            dict.insert(i);
        }
        return false;
    }
};