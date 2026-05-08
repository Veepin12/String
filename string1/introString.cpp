#include <iostream>
using namespace std;

int main(){
    /*vector<string> ans = {"abcde","efhf"};
    for(int i=0; i < ans.size();i++)
    for( char  ele : ans[i]){
        cout<<ele<<" ";
    }
    */
    string s = "abc";
    cout<<s<<endl;

    string t = "def";
    cout<<t<<endl;

   
    

    string str = "abcdef";
    cout<<s<<endl;
    reverse(str.begin() + 2,str.begin() + 5);
    cout<<str<<endl;




    return 0;

}