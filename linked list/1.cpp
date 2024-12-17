#include <bits/stdc++.h>
using namespace std;
class vik{
    public:
    virtual void disp(){
        cout<<"BASE";
    }
    void print(){
        cout<<"BASE";
    }
};

class vik_child{
    public:
   void disp(){
        cout<<"child";
    }
    void print(){
        cout<<"child";
    }
};

int main(){
 vik *base;vik_child child;

 

    return 0;
}