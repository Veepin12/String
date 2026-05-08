#include <iostream>
using namespace std;
class Solution{
public:

        int maxfreq(string s){

       /* Brute force approaches ..
        int n = s.length();

        int max = 0;
        for(int i = 0; i < n; i++){
          char ch = s[i];
          int count = 1;
          for( int j = i + 1 ; j < n; j++){
            if(s[j] == s[i]) count++;
          }
          if(max < count) max = count;
         }
        return max;
        */
            vector<int> alpha(26,0);

            for( int i = 0; i < s.length(); i++){
                char ch = s[i];
                int asci = (int)s[i];
                alpha[asci - 97]++;

            }
            int max = 0;

            for( int i = 0; i < 26; i++){
                if(alpha[i] > max) max = alpha[i];
            }
            for( int i = 0 ; i < 26; i++){
                if( alpha[i] == max){
                    int asci = i + 97;
                    char ch = (char)asci;
                    cout<<ch<<" "<<alpha[asci - 97]<<endl;
                    

                }
            }
        return 0;



        }
    
};
int main(){

    string s;
    getline(cin,s);

    Solution S;
    cout<<S.maxfreq(s);


    return 0;
}