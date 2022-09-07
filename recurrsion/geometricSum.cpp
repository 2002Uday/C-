#include<iostream>
#include <bits/stdc++.h>
using namespace std;

double geometricSum(int k) {
    if(k == 0){
        return 1;
    }
    double a = geometricSum(k-1);
    double ans = a + 1/pow(2,k);
    return ans;
}

int main(){
    int k;
    cin>>k;
    cout<<geometricSum(k);
}
