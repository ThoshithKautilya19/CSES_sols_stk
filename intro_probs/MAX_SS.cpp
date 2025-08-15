#include<iostream>
#include<stdlib.h>
using namespace std;
#include<vector>

int main(){
    string s;
    cin >> s;
    long long ms=0;
    long long m=-1;
    char curr_c='a';
    for(long long i=0;i<s.length();i++){
        if(curr_c!=s[i]){
            m=max(m,ms);
            ms=0;
            curr_c=s[i];
            ms+=1;
        }
        else{
            ms+=1;
        }
    }
    m=max(m,ms);
    cout << m;
    return 0;

}