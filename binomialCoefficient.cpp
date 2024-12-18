#include<iostream>
using namespace std;

int factorial(int num){
    int fact = 1;
    
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

double binoCoef(int n, int r){
    double bico = factorial(n) / (factorial(r) * factorial(n - r));
    return bico;
}

int main(){
    int n, r;
    cout << "Enter n, r :";
    cin >> n >> r;
    cout << "Binomial coeffiecient nCr = " << binoCoef(n, r) << endl;
    return 0;
}