#include <iostream>
using namespace std;

int helper(int input[], int si, int ei,int element){
    if(si > ei){
        return -1;
    }
    int mid = (si+ei)/2;
    if(input[mid] == element){
        return mid;
    }
    else if(input[mid] > element){
        helper(input,si,mid-1,element);
    }
    else if(input[mid] < element){
        helper(input,mid+1,ei,element);
    }
}

int binarySearch(int input[], int size, int element) {
    int si = 0;
    int ei = size-1;
    int ans = helper(input,si,ei,element);
    return ans;
}



int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    {
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
