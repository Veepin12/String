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
    while( ss >> temp){
         vector<int> alpha(26,0);

            for( int i = 0; i < temp.length(); i++){
                char ch = temp[i];
                int asci = (int)temp[i];
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
    }

    return 0;
}