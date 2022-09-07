#include <iostream>
using namespace std;

int sum(int input[], int n){
    if(n <= 0){
        return 0;
    }
    int smallsum = input[0]+input[1];
    int ans = smallsum + sum(input + 2, n-2);
    return ans;
}

int main() {
    int n;
    cin>> n;
    int input[n];
    for(int i = 0; i < n; i++){
        cin>> input[i];
    }
    cout<<sum(input,n);
}
