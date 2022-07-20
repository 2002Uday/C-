#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int i=1 ; i <= n; i++)
    {
        for(int k=1; k <= n-i; k++)
        {
            cout<<" ";
        }
        for(int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        if(i > 1){
            for(int j = 2; j <= i; j++)
            {
                cout<<j;
            }
        }
        cout<<endl;
    }
}
