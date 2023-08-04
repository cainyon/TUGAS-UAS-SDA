#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string data[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                swap(data[j], data[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    const int size = 8;
    string dataAwal[size] = { "Fahmi Jakarta", "Romi Solo", "Andri Jakarta", "Fadilah Banyuwangi", "Ruli Bandung", "Rudi Bali", "Dendi Purwokerto", "Zaki Madiun" };

    bubbleSort(dataAwal, size);

    cout << "Hasil Bubble Sort:\n";
    for (int i = 0; i < size; i++) {
        cout << dataAwal[i] << endl;
    }

    return 0;
}
//NAMA : MUHAMMAD RAFLI
//NIM : 220401010198
//KELAS : IT 204
//MATKUL : STRUKTUR DATA DAN ALGORITMA