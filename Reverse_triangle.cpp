#include<iostream>
using namespace std;

int main(){
    int n = 4;
    char ch='A';
    char tmp;

    for(int i=0; i<n; i++){
        tmp = ch + i;
        for(int j=0; j<i+1; j++){
            cout << tmp << " ";
            tmp--;
        }
        cout << endl;
    }
    return 0;
}