#include <iostream>
#include <cstring>
using namespace std;


void replacePi(char input[]) {
    if(input[1] == 0){
        return;
    }
    replacePi(input+1);
    if(input[0] == 'p'){
        if(input[1] == 'i'){
            int l = strlen(input);
            for(int i = l ; i > 0 ; i--){
                input[i+2] = input[i];
            }
            input[0] = '3';
            input[1] = '.';
            input[2] = '1';
            input[3] = '4';
        }
    }
}


int main() {
    char input[100];
    cin>> input;
    replacePi(input);
    cout<<input;
}
