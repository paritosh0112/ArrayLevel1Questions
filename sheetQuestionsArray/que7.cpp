//Create a Array with user-input values and multiply each 
//element by -1, then print the modified Array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={};
      cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
      for(int i=0;i<5;i++){
        arr[i]=arr[i]*(-1);
      }
      for(int i=0;i<5;i++){
        cout<<arr[i];
      }
    return 0;
}
