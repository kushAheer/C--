#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int count = target[0];
        for(int i = 1 ; i < target.size() ; i++){
            if(target[i] > target[i-1]){
                count = count + target[i] - target[i-1];
            }
        }
        return count;

    }
};