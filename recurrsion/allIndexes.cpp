#include <iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]){
    if(size == 0){
        return 0;
    }
    int ans = allIndexes(input , size - 1 , x,output);
    if(input[size-1] == x){
        output[0] = size-1;
    }
    return ans+1;
}

int main() {
    int n;
    cin>> n;
    int input[n];
    int output[n];
    for(int i = 0; i < n; i++){
        cin>> input[i];
    }
    int x;
    cin>> x;
    allIndexes(input,n,x,output);
    for(int i = 0; i < n; i++){
        cout<<output[n]<<" ";
    }
}
