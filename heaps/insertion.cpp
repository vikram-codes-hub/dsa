#include <bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index=parent;
            }else{
                return ;
            }
        }

    }
    void deleteroot(){
        if(size==0){
            cout<<"Nothing to delete";
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int l=2*i;
            int r=2*i+1;

            if(l<size&&arr[i]<arr[l]){
                swap(arr[i],arr[l]);
                i=l;
            }else if(r<size&&arr[i]<arr[r]){
                swap(arr[i],arr[r]);
                i=r;
            }else{
                return;
            }
        }

    }

    void printHeap() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
   

    h.printHeap();
    h.deleteroot();
    h.printHeap();

    return 0;
}