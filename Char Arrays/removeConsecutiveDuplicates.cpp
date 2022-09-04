#include<iostream>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
    int i = 1;
    int j = 1;
    char L_char = input[0];
    for(; input[i] ; i++)
    {
        if(input[i] != L_char)
        {
            input[j] = input[i];
            L_char = input[i];
            j++;
        }
    }
    input[j] = 0;
    cout<<input;
}
int main()
{
    char str[100];
    cin>>str;
    removeConsecutiveDuplicates(str);
}
