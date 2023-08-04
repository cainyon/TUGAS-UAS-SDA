#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int x) {
    bool found = false;
    cout << "Output: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            if (found) {
                cout << "dan ";
            }
            cout << "Angka " << x << " ada di indeks ke " << i + 1 << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Angka " << x << " tidak ada dalam array" << endl;
    }
}

int main() {
    const int size = 9;
    int data[size] = {19, 40, 10, 90, 2, 50, 60, 50, 1};

    // Test Case 1
    int input1 = 1;
    linearSearch(data, size, input1);

    // Test Case 2
    int input2 = 50;
    linearSearch(data, size, input2);

    // Test Case 3
    int input3 = 100;
    linearSearch(data, size, input3);

    return 0;
}
//NAMA : MUHAMMAD RAFLI
//NIM : 220401010198
//KELAS : IT 204
//MATKUL : STRUKTUR DATA DAN ALGORITMA