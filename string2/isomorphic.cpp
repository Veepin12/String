#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    bool isomorphic(string s , string t){
        vector<int> ans(150,1000) ;
        if(s.length() != t.length()) return false;
        
        for( int  i = 0; i < s.length(); i++){
            int idx = (int)s[i];
            if(ans[idx] == 1000) ans[idx] = s[i] - t[i];
            else if(ans[idx] != s[i] - t[i]) return false;
            

        }
        return true;
    }

};
 
int  main(){
    Solution S;

    string s ;
    getline(cin,s);
    string t;
    getline(cin,t);
    cout<<S.isomorphic(s,t)<<endl;

    return 0;

}