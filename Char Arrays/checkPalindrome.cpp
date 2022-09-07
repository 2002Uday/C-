#include<iostream>
using namespace std;

bool checkPalindrome(char str[])
{
    int l = 0;
    for(int k = 0; k < 100 ; k++)
    {
        if(str[k] == 0)
        {
            break;
        }
        l++;
    }
    int i = 0;
    int j = l-1;
    for(; i <= l/2 ; i++)
    {
        if(str[i] != str[j])
        {
            return false;
        }
        else if(str[i] == str[j])
        {
            j--;
        }
    }
    return true;
}
int main()
{
    char a[100];
    cin>>a;
    cout<<a<<endl;
    bool True = checkPalindrome(a);
    if(True == 1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
