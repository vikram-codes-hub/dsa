#include <bits/stdc++.h>
using namespace std;

int ksmall(int arr[],int k,int n){
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    cout << "The " << k << "-th smallest element is: " << ksmall(arr, n, k) << endl;
    
    return 0;
}