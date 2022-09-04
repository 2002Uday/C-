#include<iostream>
using namespace std;

void Reverse(char str[])
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
    while(i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout<<str;
}
int main()
{
    char str[100];
    cin.getline(str,100);
    Reverse(str);
}
