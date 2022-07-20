#include<iostream>
using namespace std;

int main() {
	int n;
    int a;
    int b;
    int rev = 0;
    cin >>n;
    for(int i = 1;i <= n+(i-1); i++)
    {
        a = n/10;
        b = n%10;
        n = a;
        rev = (rev * 10)+ b;
    }
    cout<<rev;
}
