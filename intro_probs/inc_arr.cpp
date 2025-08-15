#include<iostream>
#include<stdlib.h>
using namespace std;
#include<vector>

int main(){
    long long n;
    cin >> n;

    long long moves = 0;
    long long p;
    cin >> p;

    for (long long i = 1; i < n; i++) {
        long long c;
        cin >>c;
        if(c<p){
            moves+=(p-c);
        }
        else{
            p=c;
        }
    }

    cout <<moves<< "\n";

    return 0;

}