#include <iostream>
#include <string>
#include <math.h>

using namespace std;

/*PROTOTIPOS*/
bool isSquare(string &matriz);
/*----------*/

int main(void)
{
    string matriz;

    getline(cin, matriz);

    isSquare(matriz) ? cout << "SIM" << endl : cout << "NAO" << endl;
}

bool isSquare(string &matriz)
{
    int size = matriz.size();
    double var;

    for (int i: matriz)
    {
        if (i == ' ')
        {
            size--;
        }
    }

    var = sqrt(size);

    return (var == (int)var);
}