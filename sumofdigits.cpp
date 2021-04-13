// Iterative

#include<iostream>
using namespace std;

int SumOfDigits(long n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<SumOfDigits(n);
    return 0;
}

// recursive
#include<iostream>
using namespace std;

int SumOfDigits(long n){
    if (n <= 0) return 0;
    return n%10 + SumOfDigits(n/10);
}

int main(){
    int n;
    cin>>n;
    int sum = SumOfDigits(n);
    cout<<sum;
    return 0;
}


