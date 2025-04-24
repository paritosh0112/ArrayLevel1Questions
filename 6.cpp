#include<bits/stdc++.h>
using namespace std;
int main(){
    int product[6]={8001,9000,8002,8800,9200,5000};
    int newArr[6];
    int k=0;
    for(int i=0;i<6;i++){
         if(product[i]>8000){
                newArr[k]=product[i];
                k++;
         }
         
    }
   for (int i = 0; i < k; i++) {
        cout << newArr[i] << " ";
    }
    return 0;
}