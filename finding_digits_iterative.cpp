#include<iostream>
using namespace std;

int CountDigits(long n){
    int counter = 0;
    while(n!=0){
        n = n/10;
        ++counter;
    }
    return counter;
}
int main(){
    cout<<CountDigits(1000000);
    return 0;
}
