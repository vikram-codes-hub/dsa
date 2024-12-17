#include <bits/stdc++.h>
using namespace std;


int main(){
    int row,col;
    cin>>row>>col;

    int **a=(int**)malloc(row* sizeof(int*));
     int **b=(int**)malloc(row* sizeof(int*));
      int **c=(int**)malloc(row* sizeof(int*));
      for(int i=0;i<row;i++){
          a[i] = (int*)malloc(col * sizeof(int));
        b[i] = (int*)malloc(col * sizeof(int));
        c[i] = (int*)malloc(col * sizeof(int));
      }
      cout<<"elements of arr1:";
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
      }

       cout<<"elements of arr2:";
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>b[i][j];
        }
      }

      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            c[i][j]=0;
            for(int k=0;k<col;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
      }

      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
      }
    return 0;
}