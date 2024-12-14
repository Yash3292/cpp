#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int oddSum = 0;

    int i = 1;
    while(i <= n){
        if(i%2 != 0){
            oddSum += i;
        }
        i++;
    }

    cout << oddSum << endl;
    return 0;
}