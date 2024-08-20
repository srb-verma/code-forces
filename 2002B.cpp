#include <bits/stdc++.h>
using namespace std;

int main() {
    int number_of_test_cases;
    cin >> number_of_test_cases;

    while (number_of_test_cases--) {
        int number_of_permutation;
        cin >> number_of_permutation;

        vector<int> alice_data(number_of_permutation);
        vector<int> bob_data(number_of_permutation);

        for (int i = 0 ; i < number_of_permutation ; i++) {
            cin >> alice_data[i];
        }

        for (int i = 0 ; i < number_of_permutation ; i++) {
            cin >> bob_data[i];
        }

        if (alice_data == bob_data) {
            cout << "Bob" << endl;
            continue;
        }

        reverse(alice_data.begin(), alice_data.end());

        if (alice_data == bob_data) {
            cout << "Bob" << endl;
            continue;
        }

        cout << "Alice" << endl;
        
    }

    return 0;
}