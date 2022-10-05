//autor Alicja Janeczko 2G proponowana ocena: 5
#include <iostream>

using namespace std;

class Pracownik
{
protected:
	string imie, nazwisko;
	int wiek;
public:
	void setImie(string imieP)
	{
		imie = imieP;
	}
	string getImie()
	{
		return imie;
	}
	void setNazwisko(string nazwiskoP)
	{
		nazwisko = nazwiskoP;
	}
	string getNazwisko()
	{
		return nazwisko;
	}
	void setWiek(int wiekP)
	{
		wiek = wiekP;
	}
	int getWiek()
	{
		return wiek;
	}

	virtual void getDane() = 0;

};

class Lekarz : public Pracownik
{
protected:
	string specjalizacja;
public:
	Lekarz();
	Lekarz(string imie, string nazwisko, int wiek, string specjalizacja)
	{
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
		this->specjalizacja = specjalizacja;
	}

	void getDane() 
	{
		cout << "\nImie: " << imie;
		cout << "\nNazwisko: " << nazwisko;
		cout << "\nWiek: " << wiek;
		cout << "\nPrzedmiot: " << specjalizacja;
	}
};

class Pielegniarka : public Lekarz
{
private:
	string nazwaOddzialu;
public:
	Pielegniarka();
	Pielegniarka(string imie, string nazwisko, int wiek, string specjalizacja, string nazwaOddzialu) : Lekarz(imie, nazwisko, wiek, specjalizacja)
	{
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
		this->specjalizacja = specjalizacja;
		this->nazwaOddzialu = nazwaOddzialu;
	}
	using Lekarz::Lekarz;

	void getDane() 
	{
		cout << "\nImie: " << imie;
		cout << "\nNazwisko: " << nazwisko;
		cout << "\nWiek: " << wiek;
		cout << "\nSpecjalizacja: " << specjalizacja;
		cout << "\nNazwa oddzialu: " << nazwaOddzialu;
	}
};

class Ordynator : public Lekarz
{
private:
	double premia;
public:
	Ordynator();
	Ordynator(string imie, string nazwisko, int wiek, string specjalizacja, double premia) : Lekarz(imie, nazwisko, wiek, specjalizacja)
	{
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
		this->specjalizacja = specjalizacja;
		this->premia = premia;
	}
	using Lekarz::Lekarz;

	void getDane() 
	{
		cout << "\nImie: " << imie;
		cout << "\nNazwisko: " << nazwisko;
		cout << "\nWiek: " << wiek;
		cout << "\nSpecjalizacja: " << specjalizacja;
		cout << "\nWarosc premii: " << premia;
	}
};

void input(string& imie, string& nazwisko, string& specjalizacja, string& nazwaOddzialu, int& wiek, double& premia, int& x)
{
	cout << "Pracownik to: ";
	cout << "\n1 - lekarz";
	cout << "\n2 - pielegniarka";
	cout << "\n3 - ordynator";

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
			cout << "Podaj specjalizacje: ";
			cin >> specjalizacja;
			break;
		case 2:
			cout << "Podaj imie: ";
			cin >> imie;
			cout << "Podaj nazwisko: ";
			cin >> nazwisko;
			cout << "Podaj wiek: ";
			cin >> wiek;
			cout << "Podaj specjalizacje: ";
			cin >> specjalizacja;
			cout << "Podaj nazwe oddzialu: ";
			cin >> nazwaOddzialu;
			break;
		case 3:
			cout << "Podaj imie: ";
			cin >> imie;
			cout << "Podaj nazwisko: ";
			cin >> nazwisko;
			cout << "Podaj wiek: ";
			cin >> wiek;
			cout << "Podaj specjalizacje: ";
			cin >> specjalizacja;
			cout << "Podaj wartosc premii wynikajacej z pelnienia funkcji ordynatora oddzialu: ";
			cin >> premia;
			break;
		default:
			break;
	}
}

int main()
{
	Pracownik* pracownik;
	string imie, nazwisko, specjalizacja, nazwaOddzialu;
	int wiek, x;
	double premia;

	input(imie, nazwisko, specjalizacja, nazwaOddzialu, wiek, premia, x);

	switch (x)
	{
		case 1:
		{
			Lekarz lekarz(imie, nazwisko, wiek, specjalizacja);
			pracownik = &lekarz;
			pracownik->getDane();
			break;
		}
		case 2:
		{
			Pielegniarka pielegniarka(imie, nazwisko, wiek, specjalizacja, nazwaOddzialu);
			pracownik = &pielegniarka;
			pracownik->getDane();
			break;
		}
		case 3:
		{
			Ordynator ordynator(imie, nazwisko, wiek, specjalizacja, premia);
			pracownik = &ordynator;
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