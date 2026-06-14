#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefixTest(vector<string>& strs) {
        for (int i = 0; i < strs[0].size();i++) {
            string prefix = strs[0].substr(0,i+1);
            for (string& s: strs) {
                if (prefix != s.substr(0,i+ 1)|| i > s.size()) {
                    return s.substr(0,i);
                }
            }
        }
    return strs[0];
}

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());

    string firstWord = strs.front();
    string lastWord = strs.back();

    auto result = mismatch(firstWord.begin(), firstWord.end(),lastWord.begin());

    int position = distance(firstWord.begin(),result.first);
    return firstWord.substr(0,position);
}

int main() {


    vector<string> values = {"dog","racecar","car"};
    //cout << values[0].empty() << endl;
    cout<<    longestCommonPrefix(values);


    return 0;
}