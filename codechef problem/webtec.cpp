#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

string qwerty_order = "QWERTYUIOPASDFGHJKLZXCVBNM";

// Function to compare two words based on QWERTY order
bool customCompare(const string &a, const string &b) {
    unordered_map<char, int> order;
    for (int i = 0; i < qwerty_order.size(); i++) {
        order[qwerty_order[i]] = i;
    }

    int minLength = min(a.size(), b.size());
    for (int i = 0; i < minLength; i++) {
        if (order[a[i]] != order[b[i]])
            return order[a[i]] < order[b[i]];
    }
    return a.size() < b.size();
}

int main() {
    vector<string> words;
    string word;
    
    while (cin >> word) {
        if (word == "X") break;
        words.push_back(word);
    }
    
    // Sorting based on QWERTY order
    sort(words.begin(), words.end(), customCompare);
    
    // Printing the sorted words
    for (const string &w : words) {
        cout << w << endl;
    }

    return 0;
}



