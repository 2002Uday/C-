#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";
    cin >>n;
    for(int i=1 ; i <= n; i++)
    {
        for(int k=1; k <= n-i; k++)
        {
            cout<<" ";
        }
        int a = i;
        for(int j = 1; j <= i; j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}
