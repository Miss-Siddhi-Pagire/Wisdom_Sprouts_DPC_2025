#include <iostream>
#include <vector>
using namespace std;

void sortArrayZeroOnesTwos(vector<int> &nums) {
    int left = 0, mid = 0, right = nums.size() - 1;
    while (mid <= right) {
        if (nums[mid] == 0) {
            swap(nums[left], nums[mid]);
            left++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[right]);
            right--;
        }
    }
}
int main() {
    vector<int> arr = {0, 1, 2, 1, 0, 2, 1, 0};
    sortArrayZeroOnesTwos(arr);
    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
