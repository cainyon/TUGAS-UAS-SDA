#include <iostream>
#include <string>
using namespace std;

void selectionSort(string data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(data[i], data[min_index]);
        }
    }
}

int main() {
    const int size = 8;
    string dataAwal[size] = { "Fahmi Jakarta", "Romi Solo", "Andri Jakarta", "Fadilah Banyuwangi", "Ruli Bandung", "Rudi Bali", "Dendi Purwokerto", "Zaki Madiun" };

    selectionSort(dataAwal, size);

    cout << "Hasil Selection Sort:\n";
    for (int i = 0; i < size; i++) {
        cout << dataAwal[i] << endl;
    }

    return 0;
}
//NAMA : MUHAMMAD RAFLI
//NIM : 220401010198
//KELAS : IT 204
//MATKUL : STRUKTUR DATA DAN ALGORITMA