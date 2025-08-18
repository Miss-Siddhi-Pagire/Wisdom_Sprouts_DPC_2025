#include <iostream>
#include<vector>
using namespace std;
int getNextGap(int dist) {
    if (dist <= 1) return 0;
    return (dist / 2) + (dist % 2);
}
void inPlaceMerge(vector<int>& first, vector<int>& second) {
    int len1 = first.size(), len2 = second.size();
    int step = getNextGap(len1 + len2);
    while (step > 0) {
        int p, q;
        for (p = 0; p + step < len1; p++) {
            if (first[p] > first[p + step])
                swap(first[p], first[p + step]);
        }
        for (q = (step > len1) ? step - len1 : 0; p < len1 && q < len2; p++, q++) {
            if (first[p] > second[q])
                swap(first[p], second[q]);
        }
        if (q < len2) {
            for (q = 0; q + step < len2; q++) {
                if (second[q] > second[q + step])
                    swap(second[q], second[q + step]);
            }
        }
        step = getNextGap(step);
    }
}

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};
    inPlaceMerge(a, b);
    cout << "a: ";
    for (int num : a) cout << num << " ";
    cout << "\nb: ";
    for (int num : b) cout << num << " ";
    cout << endl;

    return 0;
}