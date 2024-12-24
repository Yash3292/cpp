#include<iostream>
using namespace std;

int revNum(int n){
    int rev = 0;
    while(n > 0){
        rev = rev * 10 + (n%10);
        n /= 10;
    }
    return rev;
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Reverse number: " << revNum(n) << endl;
    return 0;
}