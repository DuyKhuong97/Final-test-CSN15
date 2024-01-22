#include <iostream>

using namespace std;

int main() {

    int m, d, k, c;
    cout << "Nhap so quai vat (m), Nhap do ben vu khi (d), Nhap luong giam do ben (k), Nhap gia tri phuc hoi do ben (c): ";
    cin >> m >> d >> k >> c;

    int requiredGold = 0;
    int currentDurability = d;

    for (int i = 0; i < m; i++) {
        if (currentDurability <= 0) {
            cout << -1 << endl;
            return 0;
        }

        if (currentDurability <= k) {
            requiredGold += c;
            currentDurability = d;
        }

        currentDurability -= k;
    }

    cout << "So gold can chuan bi: " << requiredGold << endl;

    return 0;
}