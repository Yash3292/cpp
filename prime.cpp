#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    bool prime = 1;

    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
    }
    if(prime){
        cout << "number is prime" << endl;
    } else {
        cout << "number is not a prime" << endl;
    }
    return 0;
}