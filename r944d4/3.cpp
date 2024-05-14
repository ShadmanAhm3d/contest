#include <iostream>

using namespace std;

string doStringsIntersect(int a, int b, int c, int d) {
    // Check if a and c are on opposite sides of b and d
    if ((a < b && c > d) || (d < a && b < c)) {
        return "YES";
    }

    // Check if b and d are on opposite sides of a and c
    if ((c < d && a > b) || (b < c && d < a)) {
        return "YES";
    }

    return "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << doStringsIntersect(a, b, c, d) << endl;
    }

    return 0;
}

