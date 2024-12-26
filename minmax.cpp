#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    int num[size];
    
    cout << "Enter nums: " << endl;
    for(int i=0; i<size; i++){
        cin >> num[i];
    }

    int largest = INT32_MIN;
    int smallest = INT32_MAX;
    int idxL, idxS;
    for(int i=0; i<size; i++){
        if(num[i] > largest){
            largest = num[i];
            idxL = i;
        }
        if(num[i] < smallest){
            smallest = num[i];
            idxS = i;
        }
    }
    cout << "Max : " << largest << " At index:" << idxL << endl;
    cout << "Min : " << smallest << " At index:" << idxS << endl;
    return 0;
}