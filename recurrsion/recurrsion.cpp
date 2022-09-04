#include<iostream>
using namespace std;

int power(int x, int n) {
    if(n == 0){
        return 1;
    }
    int smpow = power(x , n-1);
    int pow = x * smpow;
    return pow;
}

int main(){
    cout<<power(3, 3);
}
