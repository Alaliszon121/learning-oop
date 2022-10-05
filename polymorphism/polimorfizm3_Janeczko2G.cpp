//autor Alicja Janeczko 2G proponowana ocena: 5
#include <iostream>

using namespace std;

class Pracownik 
{
public:
	string imie, nazwisko;
	int wiek;
	Pracownik(string imie, string nazwisko, int wiek) 
	{
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
	}

	virtual void getDane() = 0;

};

class Nauczyciel : public Pracownik 
{
protected:
	string przedmiot;
public:
	Nauczyciel(string imie, string nazwisko, int wiek, string przedmiot) : Pracownik(imie, nazwisko, wiek) 
	{
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
		this->przedmiot = przedmiot;
	}

	void getDane() 
	{
		cout << "\nImie: " << imie;
		cout << "\nNazwisko: " << nazwisko;
		cout << "\nWiek: " << wiek;
		cout << "\nPrzedmiot: " << przedmiot;
	}
};

class Wychowawca : public Nauczyciel 
{
protected:
	string nrKlasy;
public:
	Wychowawca(string imie, string nazwisko, int wiek, string przedmiot, string nrKlasy) : Nauczyciel(imie, nazwisko, wiek, przedmiot) 
	{
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
		this->przedmiot = przedmiot;
		this->nrKlasy = nrKlasy;
	}

	void getDane() 
	{
		cout << "\nImie: " << imie;
		cout << "\nNazwisko: " << nazwisko;
		cout << "\nWiek: " << wiek;
		cout << "\nPrzedmiot: " << przedmiot;
		cout << "\nKlasa: " << nrKlasy;
	}
};

class Dyrektor : public Nauczyciel 
{
protected:
	double premia;
public:
	Dyrektor(string imie, string nazwisko, int wiek, string przedmiot, double premia) : Nauczyciel(imie, nazwisko, wiek, przedmiot) 
	{
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
		this->przedmiot = przedmiot;
		this->premia = premia;
	}

	void getDane() 
	{
		cout << "\nImie: " << imie;
		cout << "\nNazwisko: " << nazwisko;
		cout << "\nWiek: " << wiek;
		cout << "\nPrzedmiot: " << przedmiot;
		cout << "\nWarosc premii: " << premia;
	}
};

void input(string& imie, string& nazwisko, string& przedmiot, string& nrKlasy, int& wiek, double& premia, int& x)
{
	cout << "Pracownik to: ";
	cout << "\n1 - nauczyciel";
	cout << "\n2 - wychowawca";
	cout << "\n3 - dyrektor\n";

	cin >> x;

	switch (x) 
	{
		case 1:
			cout << "Podaj imie: ";
			cin >> imie;
			cout << "Podaj nazwisko: ";
			cin >> nazwisko;
			cout << "Podaj wiek: ";
			cin >> wiek;
			cout << "Podaj przedmiot: ";
			cin >> przedmiot;
			break;
		case 2:
			cout << "Podaj imie: ";
			cin >> imie;
			cout << "Podaj nazwisko: ";
			cin >> nazwisko;
			cout << "Podaj wiek: ";
			cin >> wiek;
			cout << "Podaj przedmiot: ";
			cin >> przedmiot;
			cout << "Podaj klase: ";
			cin >> nrKlasy;
			break;
		case 3:
			cout << "Podaj imie: ";
			cin >> imie;
			cout << "Podaj nazwisko: ";
			cin >> nazwisko;
			cout << "Podaj wiek: ";
			cin >> wiek;
			cout << "Podaj przedmiot: ";
			cin >> przedmiot;
			cout << "Podaj wartosc premii dyrektorskiej: ";
			cin >> premia;
			break;
		default:
			break;
	}
}

int main() 
{
	Pracownik* pracownik;
	string imie, nazwisko, przedmiot, nrKlasy;
	int wiek, x;
	double premia;

	input(imie, nazwisko, przedmiot, nrKlasy, wiek, premia, x);

	switch (x) 
	{
		case 1:
		{
			Nauczyciel nauczyciel(imie, nazwisko, wiek, przedmiot);
			pracownik = &nauczyciel;
			pracownik->getDane();
			break;
		}
		case 2:
		{
			Wychowawca wychowawca(imie, nazwisko, wiek, przedmiot, nrKlasy);
			pracownik = &wychowawca;
			pracownik->getDane();
			break;
		}
		case 3:
		{
			Dyrektor dyrektor(imie, nazwisko, wiek, przedmiot, premia);
			pracownik = &dyrektor;
			pracownik->getDane();
			break;
		}
		default:
		{
			break;
		}
	}

	return 0;
}