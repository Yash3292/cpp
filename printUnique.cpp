#include<iostream>
using namespace std;

void printUnique(int arr[], int size){
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int arr[] = {1, 3, 4, 5, 1, 4, 5, 9, 8, 6};
    int size = 10;

    printUnique(arr, size);

    return 0;
}