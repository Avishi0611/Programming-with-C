#include<iostream>
using namespace std;
int fun(int x){
    x+=1;
    return x;
}
int main(){
    int x=3;
        cout<<"the value of x before modifying is:"<<x<<endl;
    x=fun(x);
    cout<<"the value of x after modifying is:"<<x<<endl;
    return 0;
}
