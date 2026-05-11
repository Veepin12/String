#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    vector<int> occurence(vector<string> & str,vector<string> & query){
        
        sort(str.begin(),str.end());
        sort(query.begin(),query.end());
        vector<int> nums;
        string s;
        for( auto str1 : str){
             int count = 0;
            for( auto queries : query){
               
                if( str1 == queries){
                    count++;
                    

                }
            }
            nums.push_back(count);
        }
        int maxstr = INT_MIN;
        for( int i = 0; i < nums.size(); i++){
            int s = 0;
            if( nums[i] >= s) s = nums[i];
            maxstr = max( maxstr, s);

        }

     cout<<maxstr<<endl;
     return nums;
    }

};
int main(){
    Solution S;
    vector<string> str = {"veepin","formula","driver","don", "the", "don"};
    vector<string> query = {"don","the","the"};
    vector<int> ans = S.occurence(str,query);
    cout<<"[";
    for( int ele : ans){

        cout<<ele <<" ";
    }
    cout<<"]";

    return 0;
}