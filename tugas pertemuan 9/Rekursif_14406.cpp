#include <iostream>
using namespace std;

// judul : membuat fungsi rekursif penjumlahan, penhurangan, perkalian, pembagian, dan perpangkatan

// kamus :
    int tambah (int a,int b);
    int kurang (int a, int b);
    int kali (int a,int b);
    int bagi (int a,int b);
    int pangkat (int a,int b);

// deskripsi :
int main()
{
    int a;
    int b;
    cout << " input bilangan 1 : " ;
    cin >> a;
    cout << " input bilangan 2 : " ;
    cin >> b;
    cout << " Tambah : " << tambah(a,b) <<endl;
    cout << " Kurang : " << kurang(a,b) <<endl;
    cout << " Kali : " << kali(a,b) <<endl;
    cout << " Bagi : " << bagi(a,b) <<endl;
    cout << " Pangkat : " << pangkat(a,b) <<endl;

    return 0;
}

int tambah (int a,int b)
{
    if (a == 0)
    {
        return b;
    }else
    {
        return 1 + tambah(a-1,b);
    }
}
int kurang (int a, int b)
{
    if ( b == 0)
    {
        return a;
    }else
    {
        return -1 + kurang(a,b-1);
    }
}
int kali (int a,int b)
{
    if (a == 1)
    {
        return b;
    }else
    {
        return b + kali(a-1,b);
    }
}
int bagi (int a,int b)
{
    if (a < b)
    {
        return 0;
    }else
    {
        return 1 + bagi(a-b,b);
    }
}
int pangkat (int a,int b)
{
    if (b == 0)
    {
        return 1;
    }else
    {
        return a * pangkat(a,b-1);
    }
}
