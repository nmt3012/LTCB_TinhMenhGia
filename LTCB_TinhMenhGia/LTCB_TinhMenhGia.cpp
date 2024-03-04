#include <iostream>
using namespace std;

int main() {
    int totalAmount;
    cout << "Nhap so tien muon rut: ";
    cin >> totalAmount;

    int notes[8] = { 500, 200, 100, 50, 20, 10, 5, 1 };
    int counts[8] = { 0 };

    for (int i = 0; i < 8; i++) {
        counts[i] = totalAmount / notes[i];
        totalAmount %= notes[i];
    }

    cout << "So to 500: " << counts[0] << endl;
    cout << "So to 200: " << counts[1] << endl;
    cout << "So to 100: " << counts[2] << endl;
    cout << "So to 50: " << counts[3] << endl;
    cout << "So to 20: " << counts[4] << endl;
    cout << "So to 10: " << counts[5] << endl;
    cout << "So to 5: " << counts[6] << endl;
    cout << "So to 1: " << counts[7] << endl;

    return 0;
}