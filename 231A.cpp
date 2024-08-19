#include <bits/stdc++.h>
using namespace std;

int main () {
    int num_of_prob;
    cin >> num_of_prob;

    int answer = 0;
    while (num_of_prob--) {
        int pet, vas, ton;
        cin >> pet >> vas >> ton;

        if (pet + vas + ton >= 2) {
            answer++;
        }
    }

    cout << answer;
    return 0;
}