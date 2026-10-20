class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupers;
        vector<vector<string>> result;

        for (string i: strs){
            string j = i;
            sort(j.begin(), j.end());
            
            groupers[j].push_back(i);
            
        }

        for (auto& pair: groupers){
            result.push_back(pair.second);
        }

        return result;
    }
};
