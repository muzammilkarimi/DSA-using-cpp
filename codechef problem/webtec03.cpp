#include <iostream>
#include <vector>

using namespace std;

int measureBonding(int n, int m, int fr[][2]) {
    vector<int> degree(n + 1, 0); // To store degrees of each student
    int total = 0;

    for (int i = 0; i < m; i++) {
        int a = fr[i][0], b = fr[i][1];

        // Increase degrees
        degree[a]++;
        degree[b]++;

        // Calculate sum of squares
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            sum += degree[j] * degree[j];
        }

        total += sum; // Update total bonding measure
    }

    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    int fr[m][2];
    for (int i = 0; i < m; i++) {
        cin >> fr[i][0] >> fr[i][1];
    }

    cout << measureBonding(n, m, fr);
    return 0;
}
