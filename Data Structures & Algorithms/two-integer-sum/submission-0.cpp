class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        
        for (int i=0; i<nums.size(); i++){
            int val = target - nums[i];
            if (dict.count(val)){
                return {dict[val], i};
            }
            else{
                dict[nums[i]]=i;
            }
        }
    }
};
