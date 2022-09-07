#include<iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
    if(m == 0 || n == 0){
        return 0;
    }
    int mul = multiplyNumbers(m , n-1);
    int ans = m + mul;
    return ans;
}

int main(){
    cout<<multiplyNumbers(3,5);
}
