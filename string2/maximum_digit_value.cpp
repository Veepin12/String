#include <iostream>
using namespace std;

string max_digit_val(vector<string>  arr){
    int maxdigit = stoi(arr[0]);
    string  maxstr = arr[0];
    for( int i = 1; i < arr.size(); i++){
        int  s = stoi(arr[i]);
        if( s > maxdigit){
            maxdigit = s;
            maxstr = arr[i];
        }
    }
    return maxstr ;

}
int main(){
    vector<string> arr = {"003","000003723","00182","785","007752442"};
    cout<<max_digit_val(arr)<<endl;
    
    return 0;

}