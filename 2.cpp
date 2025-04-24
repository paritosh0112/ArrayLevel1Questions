//multiply of array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int multiply=1;
    for(int i=0;i<5;i++){
        multiply=multiply*arr[i];
    }
     cout<<multiply;
    return 0;
}