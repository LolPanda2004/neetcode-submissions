class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s (nums.begin(), nums.end());
        int best = 0;

        for(int i: s){
            if(s.count(i-1)){
                continue;
            }

            int curr = i;
            int len = 1;

            while(s.count(curr+1)){
                curr++;
                len++;
            }
            best = max(best, len);
        }
        return best;
    }
};
