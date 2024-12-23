#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow= 1;
    
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += rem*pow;
        pow *= 10;
    }
    return ans;
}

int binaryToDec(int binNum){
    int ans = 0, pow= 1;
    
    while(binNum > 0){
        int rem = binNum % 10;
        binNum /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    return ans;
}

int main(){
    int n = 1100101;

    cout << "Decimal Num: " << binaryToDec(n) << endl;
    

    return 0;
}