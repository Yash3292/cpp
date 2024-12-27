#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();

    int freq = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(nums[i] == ans){
            freq++;
        } else {
            freq--;
        }
    }
    cout << ans << endl;

    return 0;
}