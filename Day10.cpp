#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& words) {
    unordered_map<string, vector<string>> anagramGroups;
    for (string word : words) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        anagramGroups[sortedWord].push_back(word);
    }
    vector<vector<string>> result;
    for (auto& group : anagramGroups) {
        result.push_back(group.second);
    }
    return result;
}
int main() {
    vector<string> inputWords = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> groupedAnagrams = groupAnagrams(inputWords);
    for (auto& group : groupedAnagrams) {
        cout << "[ ";
        for (auto& word : group) cout << word << " ";
        cout << "]\n";
    }
    return 0;
}