#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
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
   cout<<linearsearch(arr,n,3);
   
    return 0;
}