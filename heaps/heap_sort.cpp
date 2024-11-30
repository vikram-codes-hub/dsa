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
void heapsort(int arr[],int n){
    while(n>1){
        swap(arr[n],arr[1]);
        n--;
        heapify(arr,n,1);
    }
}
int main(){
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"The elemnts are:";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapsort(arr,n);
    cout<<"The sorted elements are:";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}