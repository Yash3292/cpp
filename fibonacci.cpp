#include<iostream>
using namespace std;

void fibo(int n){
    int a = 0, b = 1, tmp;

    for(int i=1; i<=n+1; i++){
        cout << a << endl;
        tmp = a+b;
        a = b;
        b = tmp;
    }
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    fibo(n);
    return 0;
}