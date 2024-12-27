#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> vec, int size, int target){
    for(int i=0; i<size; i++){
        if(vec.at(i) == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {11, 38, 28, 19, 39, 10};
    int size = vec.size();
    int target = 19;

    cout << search(vec, size, target) << endl;
    return 0;
}