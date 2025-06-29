#include <bits/stdc++.h>
using namespace std;

string getResult(int n, int arr[]) { // n numerical readings exist in array arr
    string result = "";
    int sum = 0;

    for (int i = 0; i < n; i++) {
        stringstream ss;
        ss << hex << uppercase << arr[i];
        string hexStr = ss.str();

        for (char ch : hexStr) {
            if (isalpha(ch))
                result += ch;  // Collect alphabets
            else
                sum += ch - '0';  // Sum digits
        }
    }

    result += to_string(sum); // Append sum to result
    return result;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    string result = getResult(n, arr);
    cout << result;
    return 0;
}
