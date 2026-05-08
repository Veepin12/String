#include <iostream>
using namespace std;

int main(){
    /*string s = "veepin";
    cout<<s.substr(0,1);
    return 0;
    */

    string s ;
    getline(cin,s);

    if(s.length()%2 == 0){
        cout<<s.substr(s.length()/2);
    }

}