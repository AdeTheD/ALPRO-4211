#include <iostream>
using namespace std;

struct pit
{
    string merk,type,harga;
    int tahun;
};

int main()
{
    pit sepeda;
    pit *psepeda = &sepeda;

    psepeda->merk = "Polygon";
    psepeda->type = "Sepeda Gunung";
    psepeda->tahun= 2013;
    psepeda->harga= "2.000.000";

    cout << " merek\t : " << psepeda->merk << endl;
    cout << " type\t : " << psepeda->type << endl;
    cout << " tahun\t : "<< psepeda->tahun << endl;
    cout << " harga\t : "<< psepeda->harga<< endl;
    return 0;
}
