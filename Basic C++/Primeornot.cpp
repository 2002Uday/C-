#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:";
    cin >> n;
    bool a = false;
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            cout<<"It is Not Prime Number" << endl;
            a = true;
            break;
        }

    }
    if(a == false){
        cout<<"It is Prime Number.";
    }
}
