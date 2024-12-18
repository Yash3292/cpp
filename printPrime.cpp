#include<iostream>
using namespace std;

void printPrime(int n){
    for(int i=2; i<=n; i++){
        bool isprime = true;
        for(int j=2; j*j<=i; j++){
            if(i % j == 0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout << i << endl;
        }
    }
}

int main(){
    printPrime(100);
    return 0;
}