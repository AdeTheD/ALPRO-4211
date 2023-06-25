#include <iostream>

using namespace std;

enum Sosis { kimbo = 1000, sogood = 6000, sonice = 3000, kenzler = 5000 };

int main()
{
    Sosis y = Sosis::sogood;
    cout << y << endl;
    return 0;
}
