#include <iostream>
using namespace std;
int main(){

    string s = "10000000";
    // stoi :- Using to make the string to interger
    int val = stoi(s);
    sort(s.begin(),s.end());
    long long x = stoi(s);
    cout<<x<<endl;

    return 0;
}