#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){

    string str ;
    getline(cin,str);
    stringstream ss(str);

    string temp ;
    vector<string> v;
    while( ss >> temp){
        v.push_back(temp);
        

    }
    sort(v.begin(), v.end());
    for( auto ele : v){
        string s = ele ;
        sort(s.begin(),s.end());
        cout<<s<<" ";
    }

   return 0;
}