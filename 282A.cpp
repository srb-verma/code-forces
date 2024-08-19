#include <bits/stdc++.h>
using namespace std;

int main () {
    int num_of_prob;
    cin >> num_of_prob;

    int answer = 0;
    while (num_of_prob--) {
        string prob;
        cin >> prob;

        if (prob == "X++" || prob == "++X") {
            answer++;
        } else {
            answer--;
        }
    }
    cout << answer;
    return 0;
}