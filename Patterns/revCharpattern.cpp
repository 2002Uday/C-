#include<iostream>
using namespace std;


int main(){
    int n;
    cin >>n;
    char ch;
    for(int i=1 ; i <= n; i++){
        int a = n-i+1;
        for(int j = 1; j <= i; j++){
            ch = 'A' + (a+j-1) -1;
            cout<<ch;
        }
        cout<<endl;
    }
}
