#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    // Reverse Only first half of the strings.

    if(s.length()%2 == 0){
        reverse(s.begin(),s.begin()+s.length()/2);
        cout<<s<<endl;
    }
    
    return 0;
}