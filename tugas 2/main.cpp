// judul : menentukan nilai max, min, Array nilai max, min, menentukan ganjil, genap, menentukan bilangan yang dapat di faktorkan,
//          menentukan panjang jumlah isi array ganjil dan genap

#include <iostream>
using namespace std;

// Kamus :
    int nilMax (int a, int b);
    int nilMin (int a, int b);
    int maxArray(int arr[], int panjang);
    int minArray(int arr[], int panjang);
    bool isEven(int a);
    bool isOdd(int b);
    bool isFactor(int a, int b);
    int sumEven(int arr[], int panjang);
    int sumOdd(int arr[], int panjang);


// Deskripsi :
int main()
{
    cout << "1. mana kah angka yang lebih besar antara 9 dan 5 = " << nilMax(9, 5) << endl << endl;
    cout << "2. mana kah angka yang lebih besar antara 2 dan 7 = " << nilMin(2, 7) << endl << endl;

    int arr[] = {5, 8, 2, 9};

    cout << "3. nilai yang paling banya pada array 5,7,2,9 adalah = " << maxArray(arr, 4) << endl << endl;
    cout << "4. nilai yang paling rendah pada array 5,7,2,9 adalah = " << minArray(arr, 4) << endl << endl;
    cout << "5. apakah angka 7 adalah bilangan genap = " << isEven(8) << endl << endl;
    cout << "6. apakah angka 7 adalah bilangan ganjil = " << isOdd(7) << endl << endl;

    cout << "7. apakah angka 9 dan 3 dapat di faktorkan = " << isFactor(9, 3) << endl << endl;
    cout << "8. penjumlahan antara bilangan genap array '5,8,2,9' adalah = " << sumEven(arr, 4) << endl << endl;
    cout << "9. penjumlahan antara bilangan ganjil array '5,8,2,9' adalah = " << sumOdd(arr, 4) << endl;
    return 0;
}

int nilMax(int a, int b) {
    int n;
    if (a > b){
        n = a;
    } else {
        n = b;
    }
    return n;
}

int nilMin(int a, int b) {
    int n;
    if(a < b){
        n = a;
    } else {
        n = b;
    }
    return n;
}

int maxArray(int arr[], int panjang) {
    int nilMax = 0;
    for (int i = 0; i < panjang; i++){
        if (arr[i] > nilMax){
            nilMax = arr[i];
        } else {
            nilMax = nilMax;
        }
    }
    return nilMax;
}

int minArray(int arr[], int panjang) {
    int nilMin = 9999;
    for (int i = 0; i < panjang; i++) {
        if (arr[i] < nilMin){
            nilMin = arr[i];
        } else {
            nilMin = nilMin;
        }
    }
    return nilMin;
}

bool isEven(int a) {
    int hasil ;
    hasil = a % 2 == 0;
    if (hasil == 0){
        cout << "tidak " << a << " bukan bilangan genap = ";
    } else {
        cout << "iya "  << a << " adalah bilangan genap = ";
    }
    return hasil;
}

bool isOdd(int b) {
    int hasil ;
    hasil = b % 2 == 1;
    if (hasil == 0){
        cout << "tidak " << b << " bukan bilangan ganjil = ";
    } else {
        cout << "iya " << b << " adalah bilangan ganjil = ";
    }
    return hasil;
}

bool isFactor(int a, int b) {
    int jumlah;
    jumlah = a % b == 0;
    if (jumlah == 0){
        cout << "tidak dapat di faktorkan = ";
    } else {
        cout << "bisa di faktorkan = ";
    }
    return jumlah;
}

int sumEven(int arr[], int panjang) {
    int sum = 0;
    for (int i = 0; i < panjang; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        } else {
            sum = sum;
        }
    }
    return sum;
}

int sumOdd(int arr[], int panjang) {
    int sum = 0;
    for (int i = 0; i < panjang; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        } else {
            sum = sum;
        }
    }
    return sum;
}
