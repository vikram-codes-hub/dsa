//insertion in array

#include <bits/stdc++.h>
using namespace std;

void insert(int arr[],int n,int pos,int val){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    n++;
}

int main(){
    int arr[]={1,2,4,5};
    int n=4;
    insert(arr,n,2,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}