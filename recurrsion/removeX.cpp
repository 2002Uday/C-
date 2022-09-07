#include <iostream>
#include <cstring>
using namespace std;


void removeX(char input[]) {
    if(input[0] == 0){
        return;
    }
    removeX(input+1);
    if(input[0] == 'x'){
    int l = strlen(input);
        for(int i = 0; i < l ; i++){
            input[i] = input[i+1];
        }
    }
}


int main() {
    char input[100];
    cin>> input;
    removeX(input);
    cout<<input;
}
