#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";
    cin >>n;
    for(int i=1 ; i < n-i; i++)
    {
       for(int k=i; k <= n/2; k++)
        {
           cout<<" ";
        }
        for(int j = 1 ; j <= (2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n ; i >= 1; i--)
    {
        for(int k=i; k < n; k++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= (2*i-n); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
