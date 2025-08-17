#include<iostream>
#include<vector>
using namespace std;
int findDuplicateEle(vector<int>& arr1){
    int slow=arr1[0];
    int fast=arr1[0];
    do{
        slow=arr1[slow];
        fast=arr1[arr1[fast]];
    }while(slow!=fast);
    slow=arr1[0];
    while(slow!=fast){
        slow=arr1[slow];
        fast=arr1[fast];
    }
    return slow;
}
int main(){
    vector<int> arr1={1,3,4,2,2};
    cout<<"Duplicate number:"<<findDuplicateEle(arr1);
    return 0;
}