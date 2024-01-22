#include <iostream>
using namespace std;

int countScore(int x, int y) {

    if (x == 0 && y == 0) {
        return 1;
    }
    int count = 0;
    if (x > 0) {
        count += countScore(x - 1, y);
    }
    if (y > 0) {
        count += countScore(x, y - 1);
    }

    return count;
}

int main() {
    int numTestCases;
    cout << "Nhap so luong test case: ";
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
        int x, y;
        cout << "Nhap ti so hien tai (x-y) cho test case " << i + 1 << ": ";
        cin >> x >> y;

        int result = countScore(x, y);
        cout << "So cach de dat ti so " << x << "-" << y << " la: " << result << endl;
    }

    return 0;
}