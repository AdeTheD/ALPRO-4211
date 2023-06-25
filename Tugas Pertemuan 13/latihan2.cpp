#include <iostream>
using namespace std;

struct pit
{
    string merk,type,harga;
    int tahun;
};
pit sepeda;

int main()
{
    sepeda.merk = "Polygon";
    sepeda.type = "Sepeda Gunung";
    sepeda.tahun= 2013;
    sepeda.harga= "2.000.000";
    cout << " merek\t : " << sepeda.merk << endl;
    cout << " type\t : " << sepeda.type << endl;
    cout << " tahun\t : "<< sepeda.tahun << endl;
    cout << " harga\t : "<< sepeda.harga<< endl;
    return 0;
}
