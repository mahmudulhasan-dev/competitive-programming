/*
    Problem: Print a right-aligned staircase of height n using '#' character.
    Platform: HackerRank
    Language: C++
    Author: Mahmudul Hasan

    Time Complexity: O(n^2)
    Reason: For each of the n rows, we print up to n characters, resulting in n*n operations in total.
*/

#include <iostream>
using namespace std;

void staircase(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=0; j<n-i; j++) {
            cout << " ";
        }
        for(int k=0; k<i; k++) {
            cout << "#";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}