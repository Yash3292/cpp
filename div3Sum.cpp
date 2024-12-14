#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int div3sum = 0;

    for(int i=1; i<=n; i++){
        if(i%3 == 0){
            div3sum += i;
        }
    }

    cout << "Sum of all numbers from 1 to n divisible by 3 = " << div3sum << endl;
    return 0;
}