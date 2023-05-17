#include <iostream>
using namespace std;
// nama : Ade Dicky Duta Rama
// kelas : 4211
// nonim : A11.2022.14406

// judul : Soal no 1, menentukan angka terkecil genap pada array {6,7,4,3,2} dengan fungsi ganjil

// kamus :
    bool nilGanjil(int a);
    void ankTerkecil(int arr[], int n);
    int n;

// deskripsi :

    int main(){

    int A[]={6,7,4,3,2};
    n = sizeof (A)/ sizeof(A[0]);

    ankTerkecil(A, n);

    return 0;
    }

    bool nilGanjil(int a){
        if ( a % 2 == 1)
            return 1;
        else
            return 0;
    }

    void ankTerkecil(int arr[], int n ){
        int minim = arr[0];
        int i = 0;
        int index = 0;

        while ( i < n){
            if(!nilGanjil(arr[i])){
                if (arr[i] < minim){
                    minim = arr[i];
                    index = i;
                }
            }
            i = i + 1;
        }
        cout << "angka terkecilnya = " << minim << endl;
        cout << "angka pada index = " << index << endl;
    }
