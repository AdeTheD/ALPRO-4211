// judul : membuat fungsi penjumlahan dua bilangan, pengurangan dua bilangan, jumlah nilai dalam array, dan jumlah rata-rata nilai array

#include <iostream>
using namespace std;

// kamus :
    int jumlah(int a, int b);
    int kurang(int c, int d);
    int arr[5] = {2,4,1,5,3};
    int sumArr(int arr[]);
    float averageArr(int arr[]);
    int ukuran ;


// deskripsi :

int main()
{
    //pengukur array
    ukuran = sizeof(arr)/sizeof(arr[0]);

    cout << "hasil dari penjumlahan = " << jumlah (33,21)<< endl;
    cout << "hasil dari pengurangan = " << kurang (23,15) << endl;
    cout << "hasil dari jumlah nilai array = " << sumArr(arr) << endl;
    cout << "hasil dari rata-rata array = " << averageArr(arr) << endl;

    return 0;
}

int jumlah(int a, int b){
    return a + b;
}

int kurang(int c, int d){
    return c - d;
}

int sumArr(int arr[]){
    int x = 0;
    int y = 0;
    while (x < 5){
        y = arr[x] + y;
        x = x + 1 ;
    }
    return y;
}

float averageArr(int arr[]){
    int w ;
    w = sumArr(arr)/ukuran;
    return w;
}

