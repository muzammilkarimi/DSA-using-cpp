// #include <bits/stdc++.h>
// using namespace std;

// // Build the rooted tree (children lists) from an undirected tree
// // by BFS from root = 1.
// vector<vector<int>> build_children(int n,
//     const vector<int>& from,
//     const vector<int>& to)
// {
//     vector<vector<int>> adj(n+1);
//     for (int i = 0; i < (int)from.size(); i++) {
//         int u = from[i], v = to[i];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<vector<int>> children(n+1);
//     vector<bool> vis(n+1,false);
//     queue<int> q;
//     vis[1] = true;
//     q.push(1);
//     while (!q.empty()) {
//         int u = q.front(); q.pop();
//         for (int v : adj[u]) {
//             if (!vis[v]) {
//                 vis[v] = true;
//                 children[u].push_back(v);
//                 q.push(v);
//             }
//         }
//     }
//     return children;
// }

// // Check a single sequence seq of length n: is it a BFS of the tree children?
// bool is_valid_bfs(int n, 
//     const vector<vector<int>>& children,
//     const vector<int>& seq)
// {
//     if (seq.size() != (size_t)n) return false;
//     if (seq[0] != 1) return false;

//     // 1) Permutation check
//     vector<char> seen(n+1, 0);
//     for (int x : seq) {
//         if (x < 1 || x > n || seen[x]) 
//             return false;
//         seen[x] = 1;
//     }

//     // 2) The “sliding window” BFS check
//     int idx = 1;  // next slot in seq for enqueued children
//     for (int i = 0; i < n; i++) {
//         int u = seq[i];
//         int k = children[u].size();
//         if (idx + k > n) 
//             return false;  // not enough room

//         // Build a small lookup of u's children
//         // (k is small on average, sum of all k = n-1)
//         unordered_set<int> st;
//         st.reserve(k*2);
//         for (int c : children[u])
//             st.insert(c);

//         // Check that seq[idx..idx+k-1] is exactly that set
//         for (int j = idx; j < idx + k; j++) {
//             if (!st.count(seq[j])) 
//                 return false;
//         }
//         idx += k;
//     }

//     return true;
// }

// string checkLogTables(int process_nodes, vector<int> process_from, vector<int> process_to, int q, vector<vector<int>> queries) {
//     // Build the adjacency list
//     vector<vector<int>> tree(process_nodes + 1);
//     for (int i = 0; i < process_from.size(); ++i) {
//         tree[process_from[i]].push_back(process_to[i]);
//     }
    
//     string result = "";
//     for (int i = 0; i < q; ++i) {
//         vector<int>& order = queries[i];
//         queue<int> bfs;
//         unordered_set<int> expected;
//         int idx = 0;
        
//         bfs.push(1);
//         expected.insert(1);

//         bool valid = true;
//         while (!bfs.empty() && idx < process_nodes) {
//             int curr = order[idx];
//             if (expected.find(curr) == expected.end()) {
//                 valid = false;
//                 break;
//             }
//             // Remove from expected and queue
//             expected.erase(curr);

//             // Add children to expected and queue
//             for (int child : tree[curr]) {
//                 bfs.push(child);
//                 expected.insert(child);
//             }
//             bfs.pop();
//             idx++;
//         }
//         if (valid && idx == process_nodes) result += '1';
//         else result += '0';
//     }
//     return result;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> process_from(n-1), process_to(n-1);
//     for (int i = 0; i < n-1; i++) {
//         cin >> process_from[i] >> process_to[i];
//     }

//     int q;
//     cin >> q;
//     vector<vector<int>> queries(q, vector<int>(n));
//     for (int i = 0; i < q; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> queries[i][j];
//         }
//     }

//     string result = checkLogTables(n, process_from, process_to, q, queries);
//     cout << result << "\n";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> findRemainingBalls(vector<int>& direction, vector<int>& strength) {
    int n = direction.size();
    stack<int> stk;  // Stack to store indices of remaining balls
    
    for (int i = 0; i < n; i++) {
        // If current ball is moving left, check for collisions with balls moving right
        if (direction[i] == -1) {
            bool destroyed = false;
            
            // Keep checking collisions with right-moving balls on the stack
            while (!stk.empty() && direction[stk.top()] == 1 && !destroyed) {
                int j = stk.top();
                
                // Compare strengths
                if (strength[j] > strength[i]) {
                    // Ball j is stronger, ball i is destroyed
                    destroyed = true;
                } else if (strength[j] < strength[i]) {
                    // Ball i is stronger, ball j is destroyed
                    stk.pop();
                } else {
                    // Equal strength, both are destroyed
                    stk.pop();
                    destroyed = true;
                }
            }
            
            // If current ball is not destroyed, add it to stack
            if (!destroyed) {
                stk.push(i);
            }
        } else {
            // Ball is moving right, simply add to stack
            stk.push(i);
        }
    }
    
    // Collect indices from stack and sort them
    vector<int> result;
    while (!stk.empty()) {
        result.push_back(stk.top());
        stk.pop();
    }
    
    sort(result.begin(), result.end());
    return result;
}

int main() {
    // Test Case 0
    vector<int> direction1 = {1, -1, 1};
    vector<int> strength1 = {5, 3, 1};
    vector<int> result1 = findRemainingBalls(direction1, strength1);
    
    cout << "Test Case 0 Result: ";
    for (int idx : result1) {
        cout << idx << " ";
    }
    cout << endl;
    
    // Test Case 1
    vector<int> direction2 = {1, 1};
    vector<int> strength2 = {3, 4};
    vector<int> result2 = findRemainingBalls(direction2, strength2);
    
    cout << "Test Case 1 Result: ";
    for (int idx : result2) {
        cout << idx << " ";
    }
    cout << endl;
    
    return 0;
}