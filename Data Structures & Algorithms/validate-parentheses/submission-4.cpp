class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        unordered_map<char,char> sym = {
            {'(',')'},
            {'[',']'},
            {'{','}'}
        };

        for(char i: s){
            for(auto& p : sym){
                if(i==p.first){
                    par.push(i);
                }
                if(i==p.second){
                    if(par.empty()){
                        return false;
                    }
                    else if(par.top()==p.first){
                        par.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if(par.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
