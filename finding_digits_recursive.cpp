#include<iostream>
using namespace std;


int countDigits(long n){
    if(n==0) return 0;
    return 1+countDigits(n/10);
}

int main(){
    cout<<countDigits(1234);
    return 0;
}
