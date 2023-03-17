#include <iostream>
#include <array>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int jumlah(int myArr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += myArr[i];
    }
    return sum;
}

double rata(int myArr[], int size) {
    double sum = 0;
    double avg;
    for (int i = 0; i < size; i ++) {
        sum += myArr[i];
    }
    avg = sum / size;
    return avg;
}

int main() {
    cout << "PENJUMLAHAN : " <<  tambah(6, 10) << endl;
    cout << "PENGURANGAN : " <<  kurang(6, 9) << endl;
    int myArr[] = {20, 31, 56 ,11 };
    cout << "JUMLAH : " << jumlah(myArr, 4) << endl;
    cout << "RATA RATA ARRAY: " << rata(myArr, 4);
    return 0;}