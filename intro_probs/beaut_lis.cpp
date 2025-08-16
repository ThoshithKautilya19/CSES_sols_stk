#include<iostream>
#include<stdlib.h>
using namespace std;
#include<vector>

int main(){
    long long n;
    cin >> n;
    if(n<=3){
        if(n==1){
            cout << 1 << " ";
        }
        else{
            cout << "NO SOLUTION";
        }
        return 0;
    }

    // print all even or odd numbers
    long long e=2;
    while(e<=n){
        cout << e <<" ";
        e+=2;
    }
    e=1;
    while(e<=n){
        cout << e <<" ";
        e+=2;
    }

    return 0;

}