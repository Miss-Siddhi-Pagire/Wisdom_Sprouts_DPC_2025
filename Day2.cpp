#include<iostream>
#include<vector>
using namespace std;
int findMissingEle(vector<int>arr1,int n){
    int totalSum=(n+2)*(n+1)/2;
    int CurrSum=0;
    for(int num:arr1)
        CurrSum+=num;
    return totalSum-CurrSum;
}
int main(){
    vector<int> arr1={1,2,4,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"Missing Number: "<<findMissingEle(arr1,n);
    return 0;
}