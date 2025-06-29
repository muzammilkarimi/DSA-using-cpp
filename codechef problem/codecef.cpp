// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    unordered_map<int, int> mp;
//         int temp=0;
// 	    for(int i=0; i<n; i++){
// 	        int x;
//             cin>>x;
//             mp[x]++;
//             if(mp[x]==2){
//                 temp=x;
//             }
// 	    }
//         if(temp){
//             cout<<1<<endl<<temp<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
	    
// 	}
// 	return 0;
// }
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // Read permutation: P[1..n], where P[j] is the person sitting in seat j.
        vector<int> seatPerson(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> seatPerson[i];
        }
        
        // Invert permutation so that pos[i] = seat number occupied by person i.
        vector<int> pos(n + 1);
        for(int seat = 1; seat <= n; seat++){
            int person = seatPerson[seat];
            pos[person] = seat;
        }
        
        // For n == 1 the seating is trivial.
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        
        // occ[j] indicates if seat j is occupied.
        vector<bool> occ(n + 1, false);
        // occupiedSeats holds the seats that have been chosen so far.
        vector<int> occupiedSeats;
        
        bool valid = true;
        
        // Person 1 (arrival 1) must choose an end seat (seat 1 or n)
        if(pos[1] != 1 && pos[1] != n){
            valid = false;
        } else {
            occ[pos[1]] = true;
            occupiedSeats.push_back(pos[1]);
        }
        
        // Process persons 2 to n-1 (last person is forced since only one seat remains)
        for (int i = 2; i < n && valid; i++){
            // Build the list of free seats.
            vector<int> freeSeats;
            for (int j = 1; j <= n; j++){
                if(!occ[j])
                    freeSeats.push_back(j);
            }
            
            // Determine primary goal candidates:
            // For each free seat x, compute d(x) = min_{s in occupiedSeats} |x-s|.
            int maxDist = -1;
            vector<int> primaryCandidates;
            for (int x : freeSeats){
                int d = numeric_limits<int>::max();
                for (int s : occupiedSeats){
                    d = min(d, abs(x - s));
                }
                if(d > maxDist){
                    maxDist = d;
                    primaryCandidates.clear();
                    primaryCandidates.push_back(x);
                } else if (d == maxDist){
                    primaryCandidates.push_back(x);
                }
            }
            
            // Evaluate secondary goal for each candidate:
            // For candidate y, simulate S' = occupiedSeats U {y} and compute:
            // f(y) = max_{x in freeSeats, x != y} min( |x-s| over s in S' )
            int bestPotential = -1;
            vector<int> secondaryCandidates;
            for (int y : primaryCandidates){
                int potential = -1;
                for (int x : freeSeats){
                    if(x == y) continue;
                    int d = numeric_limits<int>::max();
                    // Consider distances from current occupied seats and candidate y
                    for (int s : occupiedSeats){
                        d = min(d, abs(x - s));
                    }
                    d = min(d, abs(x-y));
                    potential = max(potential, d);
                }
                if(potential > bestPotential){
                    bestPotential = potential;
                    secondaryCandidates.clear();
                    secondaryCandidates.push_back(y);
                } else if(potential == bestPotential){
                    secondaryCandidates.push_back(y);
                }
            }
            
            // The actual seat selected by person i is pos[i]. It must be one of the secondary candidates.
            bool found = false;
            for (int candidate : secondaryCandidates){
                if(candidate == pos[i]){
                    found = true;
                    break;
                }
            }
            if(!found){
                valid = false;
                break;
            }
            // Add pos[i] to the occupied seats.
            occ[pos[i]] = true;
            occupiedSeats.push_back(pos[i]);
        }
        
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}

