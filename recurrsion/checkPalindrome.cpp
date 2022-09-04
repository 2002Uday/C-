#include <iostream>
#include <string>
using namespace std;


bool checkPalindrome(char input[]) {
    int l = 0;
    for(int k = 0; k < 100 ; k++)
    {
        if(input[k] == 0)
        {
            break;
        }
        l++;
    }
    int start = 0;
    int end = l-1;
    if(end <= 1){
        return false;
    }
    if(input[start] == input[end]){
        bool ans = checkPalindrome(input+1);
    }
    else{
        return false;
    }
    return true;
}

int main() {
    char input[100];
    cin>> input;
    cout<<checkPalindrome(input);
}
