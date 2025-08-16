#include <iostream>
#include <vector>
using namespace std;

int findMissingEle(vector<int> arr1, int n) {
    int totalSum = (n + 1) * (n + 2) / 2;
    int currSum = 0;
    for (int num : arr1)
        currSum += num;
    return totalSum - currSum;
}

int main() {
    vector<int> arr1 = {};
    int n = arr1.size();
    cout << "Missing Number: " << findMissingEle(arr1, n);
    return 0;
}
