//autor Alicja Janeczko 2G proponowana ocena: 5
#include <iostream>
#include <math.h>

using namespace std;

class Srednia 
{
public:
    double sredniaOcen(int a, int b) 
    {
        double sredniaocen = pow((a * b), 1.0 / 2);
        return sredniaocen;
    }

    double sredniaOcen(int a, int b, int c) 
    {
        double sredniaocen = pow((a * b * c), 1.0 / 3);
        return sredniaocen;
    }

    double sredniaOcen(int a, int b, int c, int d) 
    {
        double sredniaocen = pow((a * b * c * d), 1.0 / 4);
        return sredniaocen;
    }
};

void input(int& a, int& b, int& c, int& d, int& x)
{
    cout << "1 - Srednia z dwoch ocen\n";
    cout << "2 - Srednia z trzech ocen\n";
    cout << "3 - Srednia z czterech ocen\n";

    cin >> x;

    switch (x) 
    {
        case 1:
            cout << "Podaj pierwsza ocene: ";
            cin >> a;
            cout << "Podaj druga ocene: ";
            cin >> b;
            break;
        case 2:
            cout << "Podaj pierwsza ocene: ";
            cin >> a;
            cout << "Podaj druga ocene: ";
            cin >> b;
            cout << "Podaj trzecia ocene: ";
            cin >> c;
            break;
        case 3:
            cout << "Podaj pierwsza ocene: ";
            cin >> a;
            cout << "Podaj druga ocene: ";
            cin >> b;
            cout << "Podaj trzecia ocene: ";
            cin >> c;
            cout << "Podaj czwarta ocene: ";
            cin >> d;
            break;
        default:
			break;
    }
}

int main()
{
    int a, b, c, d, x;
    Srednia srednia;
    input(a, b, c, d, x);
    switch (x)
    {
        case 1:
            cout << "\nSrednia: " << srednia.sredniaOcen(a, b);
            break;
        case 2:
            cout << "\nSrednia: " << srednia.sredniaOcen(a, b, c);
            break;
        case 3:
            cout << "\nSrednia: " << srednia.sredniaOcen(a, b, c, d);
            break;
        default:
            break;
    }

    return 0;
}

