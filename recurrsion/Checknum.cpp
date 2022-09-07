#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x){
    if(size <= 0){
        return false;
    }
    if(input[1] == x){
        return true;
    }
    bool check = checkNumber(input + 1 , size - 1, x);
    return check;
}

int main() {
    int n;
    cin>> n;
    int input[n];
    for(int i = 0; i < n; i++){
        cin>> input[i];
    }
    int x;
    cin>> x;
    cout<<checkNumber(input,n,x);
}
