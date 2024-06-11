#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int x, y;
        cin >> x >> y;

        // Calculate the number of screens needed for 2x2 icons
        int y_screens = (4 * y + 14) / 15; // ceil((4 * y) / 15) using integer math
        
        // Calculate remaining 1x1 icons that need to be placed
        int used_cells_by_y = 4 * y;
        int total_used_cells = y_screens * 15;
        int remaining_cells_for_x = total_used_cells - used_cells_by_y;

        int remaining_x = x - remaining_cells_for_x;
        
        // If remaining_x is less than or equal to 0, it means all 1x1 icons can be placed in the current screens
        if (remaining_x <= 0) {
            cout << y_screens << endl;
        } else {
            // Calculate additional screens needed for the remaining 1x1 icons
            int x_screens = (remaining_x + 14) / 15; // ceil(remaining_x / 15) using integer math
            cout << y_screens + x_screens << endl;
        }
    }
    return 0;
}

