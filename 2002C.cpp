#include <bits/stdc++.h>
using namespace std;

int main () {
    int number_of_test_cases;
    cin >> number_of_test_cases;

    while (number_of_test_cases--) {
        int number_of_circles;
        cin >> number_of_circles;

        vector<vector<int>> circles_data(number_of_circles);
        for (int i = 0 ; i < number_of_circles ; i++) {
            int x, y;
            cin >> x >> y;

            circles_data[i] = {x, y};
        }

        int start_x, start_y, end_x, end_y;
        cin >> start_x >> start_y >> end_x >> end_y;

        double min_distance = INT_MAX;
        for (int i = 0 ; i < number_of_circles ; i++) {
            double distance = sqrt(( static_cast<double>(circles_data[i][0] - end_x) * static_cast<double>(circles_data[i][0] - end_x)) + ( static_cast<double>(circles_data[i][1] - end_y) * static_cast<double>(circles_data[i][1] - end_y)));
            min_distance = min (distance, min_distance);
        }

        double distance = sqrt((static_cast<double>(start_x - end_x) * static_cast<double>(start_x - end_x)) + (static_cast<double>(start_y - end_y) * static_cast<double>(start_y - end_y)));
        if (min_distance <= distance) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}