#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";
    cin >>n;
    int a = 1;
    for(int i=a ; i <= n; i++)
    {
        for(int k=i; k < n; k++)
        {
            cout<<" ";
        }
        for(int j = 1 ; j <= (2*i-1); j++){
            cout<<j;
        }
        cout<<endl;
    }
}
