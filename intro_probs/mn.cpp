#include<iostream>
#include<stdlib.h>
using namespace std;
#include<vector>

int main(){
    long long n;
    cin >> n;

    long long tot_sum=(n*(n+1))/2;
    long long res_sum=0;
    for(int i=0;i<n-1;i++){
        long long t;
        cin >> t;
        res_sum+=t;
    }

    long long fin=(tot_sum-res_sum);
    cout << fin;
    return 0;


}