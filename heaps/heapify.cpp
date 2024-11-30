#include <bits/stdc++.h>
using namespace std;


void heapify(int arr[],int n,int i){
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<=n&&arr[largest]<arr[l]){
        largest=l;
    }
    if(r<=n&&arr[largest]<arr[r]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
int main(){
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
