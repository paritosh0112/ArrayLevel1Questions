//Declare a Array of integers and take 5 inputs from the user to 
//store in the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={};
    int newArr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    for(int i=0;i<5;i++){
            newArr[i]=arr[i];
    }
    for(int i=0;i<5;i++){
            cout<<newArr[i]<<" ";
    }
    return 0;
}
