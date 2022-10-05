//autor Alicja Janeczko 2G proponowana ocena: 5
#include <iostream>
#include <math.h>

using namespace std;

class Srednia 
{
private:
    double a, b, c, d, x;

public:
    void setA(double oa)
    {
        a = oa;
    }
    void setB(double ob)
    {
        b = ob;
    }
    void setC(double oc)
    {
        c = oc;
    }
    void setD(double od)
    {
        d = od;
    }

    void nadajWagi(double& wA, double& wB)
    {
        wA = (a * 0.4);
        wB = (b * 0.6);
    }
    void nadajWagi(double& wA, double& wB, double& wC)
    {
        wA = (a * 0.2);
        wB = (b * 0.3);
        wC = (c * 0.5);
    }
    void nadajWagi(double& wA, double& wB, double& wC, double& wD)
    {
        wA = (a * 0.1);
        wB = (b * 0.2);
        wC = (c * 0.3);
        wD = (d * 0.4);
    }

    double obliczAvg(double wA, double wB)
    {
        double x = (wA + wB) / (0.4 + 0.6);
        return x;
    };
    double obliczAvg(double wA, double wB, double wC)
    {
        double x = (wA + wB + wC) / (0.2 + 0.3 + 0.5);
        return x;
    };
    double obliczAvg(double wA, double wB, double wC, double wD)
    {
        double x = (wA + wB + wC + wD) / (0.1 + 0.2 + 0.3 + 0.4);
        return x;
    };
};

void input(double& a, double& b, double& c, double& d, int& y)
{
    cout << "1 - Srednia z dwoch ocen\n";
    cout << "2 - Srednia z trzech ocen\n";
    cout << "3 - Srednia z czterech ocen\n";

    cout << "Wybor: ";
    cin >> y;

    switch (y) 
    {
        case 1:
            cout << "Podaj oceny:\n";
            cout << "ocena 1: ";
            cin >> a;
            cout << "ocena 2: ";
            cin >> b;
            break;
        case 2:
            cout << "Podaj oceny:\n";
            cout << "ocena 1: ";
            cin >> a;
            cout << "ocena 2: ";
            cin >> b;
            cout << "ocena 3: ";
            cin >> c;
            break;
        case 3:
            cout << "Podaj oceny:\n";
            cout << "ocena 1: ";
            cin >> a;
            cout << "ocena 2: ";
            cin >> b;
            cout << "ocena 3: ";
            cin >> c;
            cout << "ocena 4: ";
            cin >> d;
            break;
        default:
			break;
    }
}

int main()
{
    Srednia srednia;
    double a, b, c, d;
    int x;
    
    input(a, b, c, d, x);

    switch (x) 
    {
        case 1:
            srednia.setA(a);
            srednia.setB(b);
            
            srednia.nadajWagi(a, b);
            cout << "Srednia wynosi: " << srednia.obliczAvg(a, b);
            break;
        case 2:
            srednia.setA(a);
            srednia.setB(b);
            srednia.setC(c);

            srednia.nadajWagi(a, b, c);
            cout << "Srednia wynosi: " << srednia.obliczAvg(a, b, c);
            break;
        case 3:
            srednia.setA(a);
            srednia.setB(b);
            srednia.setC(c);
            srednia.setC(d);

            srednia.nadajWagi(a, b, c, d);
            cout << "Srednia wynosi: " << srednia.obliczAvg(a, b, c, d);
            break;
        default:
			break;
    }

    return 0;
}