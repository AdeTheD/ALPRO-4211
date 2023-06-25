#include <iostream>

using namespace std;

struct luas
{
    int p,l,r;
    float phi,jml;
};
luas persegi_panjang;
luas lingkaran;

struct volume
{
    float phi,jml;
    int r,t;
};
volume kerucut;
volume bola;

int main ()
{
    persegi_panjang.p = 5;
    persegi_panjang.l = 3;
    persegi_panjang.jml = persegi_panjang.p * persegi_panjang.l;
    cout << " Luas persegi panjang : " << persegi_panjang.jml << endl;

    lingkaran.r = 10;
    lingkaran.phi = (22.0/7.0);
    lingkaran.jml = lingkaran.phi * lingkaran.r * lingkaran.r;
    cout << " Luas lingkaran : " <<lingkaran.jml<<endl;

    kerucut.phi = (22.0/7.0);
    kerucut.r = 2;
    kerucut.t = 5;
    kerucut.jml = (1.0/3.0) * kerucut.phi * kerucut.r* kerucut.r * kerucut.t;
    cout << " Volume kerucut : " << kerucut.jml <<endl;

    bola.phi = 22.0/7.0;
    bola.r = 2;
    bola.jml = (4.0/3.0) * bola.phi * bola.r * bola.r * bola.r;
    cout << " volume bola : " << bola.jml << endl;
    return 0;
}
