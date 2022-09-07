#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int stringToNumber(char input[]){
    int l = (strlen(input)-1);
    if(input[0] == 0){
        return 0;
    }
    int ans = stringToNumber(input+1);
    int b = input[0];
    b = b - 48;
    int num = pow(10,l);
    return b * num + ans;
}

int main() {
    char input[100];
    cin>> input;
    cout<<stringToNumber(input);
}
