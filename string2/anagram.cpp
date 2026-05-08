#include <iostream>
using namespace std;
class Solution{
public:
    bool anagram(string &s, string t){
        int n = s.length();
        int m = t.length();

        if(n == m){
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s == t){
                return true;
            }
        }
        return false;
     }

};
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    
    Solution S;
    cout<<S.anagram(s,t)<<endl;
    return 0;
}