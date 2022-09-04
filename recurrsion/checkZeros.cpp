#include<iostream>
using namespace std;

int countZeros(int n) {
    if(n == 0){
        return 1;
    }
    int LN = n/10;
    int SN = n%10;
    if(LN == 0){
        return 0;
    }
    int ans = countZeros(LN);
    if(SN == 0){
        ans = ans + 1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<countZeros(n);
}
