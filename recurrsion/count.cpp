#include<iostream>
using namespace std;

int count(int n){
    if(n == 0){
        return 0;
    }
    int small = count(n/10);
    int ans = small + 1;
    return ans;
}

int main(){
    int i = count(1234);
    cout<<i;
}
