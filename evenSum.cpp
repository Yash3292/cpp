#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int evenSum = 0;

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            evenSum += i;
        }
    }

    cout << "sum of even number = " << evenSum << endl;
    return 0;
}