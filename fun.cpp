#include<iostream>
using namespace std;

void Fun(int n){
    if(n<1) return;
    else{
        cout<<n<<" ";
        Fun(n-1);
        cout<<n<<" ";
    }
}

int main(){
    Fun(3);
    return 0;
}
