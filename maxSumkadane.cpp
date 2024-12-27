#include <iostream>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};

    int currSum = 0;
    int maxSum = INT32_MIN;

    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << "max subarray sum = " << maxSum << endl;
    return 0;
}