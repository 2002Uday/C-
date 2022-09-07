#include<iostream>
using namespace std;
int main()
{
    int n;
    int P;
    int C;
    bool isDec = true;
    bool False = false;
    cin >> n;
    cin>>P;
    for(int i = 1; i < n; i++)
    {
        cin>> C;
        if(C == P){
            False = true;
            break;
        }
        else if(C < P && !isDec){
            False = true;
            break;
        }
        else if(C > P && isDec){
            isDec = false;
        }
        P=C;
    }
    if(False==true)
    {
        cout<< "false";
    }
    else{
        cout<<"true";
    }
}
