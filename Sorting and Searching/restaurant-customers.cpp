// Arrival and leaving times of n restaurant customers

// Approach
// Use event-based sweep line algorithm

// Treat each arrival as +1 event
// Treat each leaving as -1 event
// Sort all events by time
// Traverse events in order, maintaining count of current customers
// Track maximum count encountered

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> events;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, +1}); // Arrival
        events.push_back({b, -1}); // Leaving
    }
    sort(events.begin(), events.end());
    int curr = 0, maxx = 0;
    for(auto [time, change] : events) {
        curr += change;
        maxx = max(maxx, curr);
    }
    cout << maxx << endl;
    return 0;
}