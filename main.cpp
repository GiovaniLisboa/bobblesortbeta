#include <stdlib.h>
#include <iostream>
#include <time.h>

using std:: cout;
using std:: cin;

void aleatorio(int &);
bool trocar (int &, int &);
bool trocar (double &, double &);

int main(int argc, char **argv)
{
    int a, b, c, d, e;
    const int NITER = 5;
    int cont = 0;
    
    srand (time(NULL));
    
    aleatorio (a);
    aleatorio (b);
    aleatorio (c);
    aleatorio (d);
    aleatorio (e);
    
    cout << "A: " << a << "\n";
    cout << "B: " << b << "\n";
    cout << "C: " << c << "\n";
    cout << "D: " << d << "\n";
    cout << "E: " << e << "\n";
    cout << "\n";

    for (int i = 0; i < NITER - 1; i++)
    {    
        if (trocar(a, b))
            cont++;
        if (trocar(b, c))
            cont++;
        if (trocar(c, d))
            cont++;
        if (trocar(d, e))
            cont++;
    }
    
    cout << "Trocas: " << cont << "\n";
    cout << "\n";
    cout << "A: " << a << "\n";
    cout << "B: " << b << "\n";
    cout << "C: " << c << "\n";
    cout << "D: " << d << "\n";
    cout << "E: " << e << "\n";
    
    cout << "\n";
    return 0;
}

void aleatorio (int &x)
{
    x = (rand() % 20);
}

bool trocar (int &x, int &y)
{
    int temp;
    
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else return false;
}

bool trocar (double &x, double &y)
{
    int temp;
    
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else return false;
}