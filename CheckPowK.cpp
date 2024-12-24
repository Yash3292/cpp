#include<iostream>
using namespace std;

int main(){
    int k;
    cout << "Enter the base: ";
    cin >> k;
    int n;
    cout << "Enter num: ";
    cin >> n;
    bool ispow = true;
    while(n != 1){
        if(n % k != 0){
            ispow = false;
            break;
        }
        n /= k;
    }
    if(ispow){
        cout << "Yes it is power of " << k << endl;
    } else {
        cout << "No it is not a power of " << k << endl;
    }

    return 0;
}