#include<iostream>
using namespace std;

int main(){
    long long n1,n2, rev_n1=0,rev_n2=0,rem_n1,rem_n2,add,rev_add=0,rem_add;
    cin>>n1>>n2;
    while(n1 != 0){
        rem_n1 = n1%10;
        rev_n1 = rev_n1*10+rem_n1;
        n1 /= 10;
    }
    while(n2 != 0){
        rem_n2 = n2%10;
        rev_n2 = rev_n2*10 + rem_n2;
        n2 /= 10;
    }
    add = rev_n1+rev_n2;
    while(add!=0){
        rem_add = add%10;
        rev_add = rev_add*10 + rem_add;
        add /= 10;
    }
    cout<<rev_add;
    return 0;
}
