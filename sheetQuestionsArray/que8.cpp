//Declare an array of size n (user input) and initialize 
//it with numbers from 1 to n. Multiply all even-indexed elements by 2.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={};
      cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
      for(int i=0;i<5;i=i+2){
        arr[i]=arr[i]*2;
      }
      for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
      }
    return 0;
}
