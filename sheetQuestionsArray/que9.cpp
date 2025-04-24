//Write a program to create a array {1, 2, 3, 4, 5} and store 
//the square of each element in the same Array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1, 2, 3, 4, 5};
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
     arr[i]=arr[i]*arr[i];
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
