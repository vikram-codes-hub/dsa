//deletion in array

#include <bits/stdc++.h>
using namespace std;

void deletion(int arr[],int&n,int pos){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    deletion(arr,n,1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
