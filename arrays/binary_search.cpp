#include <bits/stdc++.h>
using namespace std;



int binarysearch(int arr[],int n,int key){
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Key found at index:"<<binarysearch(arr,n,3);
    return 0;
}
