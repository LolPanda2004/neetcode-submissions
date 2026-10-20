class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> counter_s;
        unordered_map<char, int> counter_t;

        for(char l: s){
            counter_s[l]++;
        }

        for(char m: t){
            counter_t[m]++;
        }

        if(counter_s==counter_t){
            return true;
        }
        return false;
    }
};
