#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<pair<int,int>> zeroSumSubs(vector<int>& nums) {
    unordered_map<long long, vector<int>> store;
    vector<pair<int,int>> output;
    long long prefix = 0;
    for(int j = 0; j < nums.size(); j++) {
        prefix += nums[j];
        if(prefix == 0) output.push_back({0, j});
        if(store.find(prefix) != store.end()) {
            for(auto pos : store[prefix]) output.push_back({pos + 1, j});
        }
        store[prefix].push_back(j);
    }
    return output;
}
int main() {
    vector<int> nums = {1, 2, -3, 1, 2};
    vector<pair<int,int>> ans = zeroSumSubs(nums);
    for(auto &pr : ans) cout << "(" << pr.first << ", " << pr.second << ") ";
}