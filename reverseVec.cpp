#include <iostream>
#include <vector>
using namespace std;

int reverse(vector<int>& vec){
    int size = vec.size();
    int start = 0, end = size - 1;
    while(start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }    
}

int main(){
    vector<int> vec = {11, 38, 28, 19, 39, 10};

    reverse(vec);
    
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}