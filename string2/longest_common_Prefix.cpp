#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        sort(str.begin(),str.end());
        if(n == 1) return str[0];
        if( n == 0) return "";
        string first = str[0];
        string last = str[n-1];
        string s = "";

        for( int i = 0 ; i < min(first.length(),last.length()); i++){
            if( first[i] == last[i]){
                s += first[i];
            }
            else break;
        }
        cout<<s;
        return s;

       
    }
};

int main(){

    vector<string> str = {"horse", "honer" , " hobbies"};
    Solution S;
    cout<<S.longestCommonPrefix(str);
    cout<<endl;

    return 0;
}