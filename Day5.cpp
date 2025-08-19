#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = arr[n-1]; 
    leaders.push_back(maxRight);  
    
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end()); 
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> ans = findLeaders(arr);
    for (int x : ans) cout << x << " ";
    return 0;
}