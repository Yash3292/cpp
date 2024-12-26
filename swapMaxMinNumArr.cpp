#include<iostream>
using namespace std;

int main(){
    int arr[] = {67, 23, 78, 92, 43};
    int size = 5;

    int smallest = INT32_MAX;
    int largest = INT32_MIN;
    int idxL, idxS;

    for(int i=0; i<size; i++){
        if(arr[i] > largest){
            largest = arr[i];
            idxL = i;
        }
        if(arr[i] < smallest){
            smallest = arr[i];
            idxS = i;
        }
    }
    swap(arr[idxL], arr[idxS]);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}