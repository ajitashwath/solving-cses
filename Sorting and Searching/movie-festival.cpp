// n movies will be shown
// We know starting and ending time of each movie

// Max no. of movies you can watch entirely


// Approach
// Classic Activity Selection Problem

// Sort all movies by their ending times
// Always pick next movie that starts after last selected movie's ending time

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> movies(n);
    for(int i = 0; i < n; i++) cin >> movies[i].first >> movies[i].second;
    sort(movies.begin(), movies.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    })
    int cnt = 0;
    int lend = 0;
    for(auto &[start, end] : movies) {
        if(start >= lend) {
            ++cnt;
            lend = end;
        }
    }
    return 0;
}