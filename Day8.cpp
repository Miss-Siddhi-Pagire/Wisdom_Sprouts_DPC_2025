#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word) { 
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) result += " ";
    }
    return result;
}
int main() {
    cout << reverseWords("the sky is blue") << endl;  
    cout << reverseWords(" hello world ") << endl;       
    cout << reverseWords("a good   example") << endl;   
    cout << reverseWords("   ") << endl;                  
    cout << reverseWords("word") << endl;             
    return 0;
}