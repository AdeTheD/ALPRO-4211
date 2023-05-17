#include <iostream>
using namespace std;
// nama : Ade Dicky Duta Rama
// kelas : 4211
// nonim : A11.2022.14406

// judul : Soal no 2, membuat 2 program sorting degan algoritma yang kamu ketahui dari besar ke terkecil

// kamus:
void quicksort(int arr[], int left, int right);
void tukar(int& a , int& b);
void selectionSort(int arr[], int n);

//deskripsi :
int main() {
    int arr[] = { 7, 2, 1, 6, 8 };
    int arr2[] = { 6,2,8,1,9,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int panjang = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Sebelum sorting quicksort : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    quicksort(arr, 0, n-1);

    cout << "Setelah sorting quicksort : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl << endl;

    cout << "Sebelum sorting selectionsort : ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;

    selectionSort(arr2, panjang);

    cout << "Setelah sorting selectionsort : ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;

    return 0;
}

void quicksort(int arr[], int left, int right) {
    int i = left;
    int j = right;
    int tmp;
    int pivot = arr[left];

    while (i <= j) {
        while (arr[i] > pivot)
            i++;
        while (arr[j] < pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}

void tukar(int& a , int& b){
        int temp = a;
        a = b;
        b = temp;
    }

void selectionSort(int arr[], int n){
    int a = 1;
    while (a < n){
        int b = 0;
        while (b < n-1){
                if (arr[b] < arr[b+1]){
                tukar(arr[b],arr[b+1]);
                }
            b++;
        }
        a++;
    }
}
