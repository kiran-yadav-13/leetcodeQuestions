class Solution {
public:
    char findTheDifference(string s, string t) {
        // for(int i=0; i<t.length(); i++){
        //     if(s.find(t[i])==std::string::npos){
        //         return t[i];
        //     }
        // }
int s1=0;
int t1=0;
        for(int i=0; i<t.length(); i++){
            t1+=t[i];
        }
            for(int i=0; i<s.length(); i++){
            s1+=s[i];
        }
        return t1-s1;
    }
};
