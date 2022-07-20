#include<iostream>
using namespace std;
int main()
{
    int i, chk=0, j;
    int n;
    cin>> n;
    for(i=1; i<=n; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               chk++;
               break;
           }
        }
        if(chk==0 && i!=1)
            cout<<i<<endl;
        chk = 0;
    }
    cout<<endl;
    return 0;
}
