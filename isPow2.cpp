#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int count = 0;

    while(n > 0){
        if(n & 1 == 1){
            count++;
        }
        n = n >> 1;
    }
    if(count == 1){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}