//Given an array {2, 4, 6, 8, 10}, write a program to
// multiply each element by 3 and store the result in the same array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2, 4, 6, 8, 10};
    for(int i=0;i<5;i++){
        arr[i]=arr[i]*3;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
