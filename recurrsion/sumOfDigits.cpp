#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    int b = n/10;
    int a = n%10;
    if(b == 0){
        return a;
    }
    int ans = sumOfDigits(b);
    ans = ans + a;
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<sumOfDigits(n);
}
