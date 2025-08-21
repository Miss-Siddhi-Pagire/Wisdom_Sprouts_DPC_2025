#include<iostream>
#include<vector>
using namespace std;
int calculateTrappedRainWater(vector<int>& barHeights) {
    int totalBars = barHeights.size();
    int leftPointer = 0, rightPointer = totalBars - 1;
    int maxHeightFromLeft = 0, maxHeightFromRight = 0;
    int totalTrappedWater = 0;
    while (leftPointer < rightPointer) {
        if (barHeights[leftPointer] < barHeights[rightPointer]) {
            if (barHeights[leftPointer] >= maxHeightFromLeft)
                maxHeightFromLeft = barHeights[leftPointer];
            else
                totalTrappedWater += maxHeightFromLeft - barHeights[leftPointer];
            leftPointer++;
        } else {
            if (barHeights[rightPointer] >= maxHeightFromRight)
                maxHeightFromRight = barHeights[rightPointer];
            else
                totalTrappedWater += maxHeightFromRight - barHeights[rightPointer];
            rightPointer--;
        }
    }
    return totalTrappedWater;
}
int main() {
    vector<int> barHeights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Total trapped water: " << calculateTrappedRainWater(barHeights) << endl;
    return 0;
}