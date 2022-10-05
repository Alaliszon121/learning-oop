// Alicja Janeczko 2G proponowana ocena: 5
#include <iostream>

using namespace std;

class Pracownik
{
public:
	string imie_pracownika;
	string nazwisko_pracownika;
	string data_urodzenia;
	string plec_pracownika;
	string nazwa_szkoly;
	int lata_doswiadczenia;

	void setImie(string imie) {
		imie_pracownika = imie;
	}
	string getImie() {
		return imie_pracownika;
	}
	void setNazwisko(string nazwisko) {
		nazwisko_pracownika = nazwisko;
	}
	string getNazwisko() {
		return nazwisko_pracownika;
	}
	void setData(string data) {
		data_urodzenia = data;
	}
	string getData() {
		return data_urodzenia;
	}
	void setPlec(string plec) {
		plec_pracownika = plec;
	}
	string getPlec() {
		return plec_pracownika;
	}
	void setSzkola(string szkola) {
		nazwa_szkoly = szkola;
	}
	string getSzkola() {
		return nazwa_szkoly;
	}
	void setLata(int lata) {
		lata_doswiadczenia = lata;
	}
	int getLata() {
		return lata_doswiadczenia;
	}
};

class Nauczyciel : public Pracownik
{
private:
	string nauczany_przedmiot;
	int nr_sali;
public:
	Nauczyciel();
	Nauczyciel(string imie, string nazwisko, string data, string plec, string szkola, int lata, string przedmiot, int sala)
	{
		this->imie_pracownika = imie;
		this->nazwisko_pracownika = nazwisko;
		this->data_urodzenia = data;
		this->plec_pracownika = plec;
		this->nazwa_szkoly = szkola;
		this->lata_doswiadczenia = lata;
		this->nauczany_przedmiot = przedmiot;
		this->nr_sali = sala;
	}
};

class Dyrektor : public Nauczyciel
{
private:
	double wartosc_premii;
	int ilosc_pochwal;
public:
	
	Dyrektor();
	Dyrektor(string imie, string nazwisko, string data, string plec, string szkola, int lata, string przedmiot, int sala, double premia, int pochwaly):Nauczyciel(imie, nazwisko, data, plec, szkola, lata, przedmiot, sala)
	{
		wartosc_premii = premia;
		ilosc_pochwal = pochwaly;
	}
	using Nauczyciel::Nauczyciel;
};

class Wychowawca : public Nauczyciel
{
private:
	string numer_klasy;
	int ilosc_zebran;
public:
	Wychowawca();
	Wychowawca(string imie, string nazwisko, string data, string plec, string szkola, int lata, string przedmiot, int sala, string klasa, int zebrania):Nauczyciel(imie, nazwisko, data, plec, szkola, lata, przedmiot, sala)
	{
		numer_klasy = klasa;
		ilosc_zebran = zebrania;
	}
	using Nauczyciel::Nauczyciel;
};

void dane(string& imie, string& nazwisko, string& data, string& plec, string& szkola, int& lata, string& przedmiot, int& sala, double& premia, int& pochwaly, string& klasa, int& zebrania, int x)
{
	cout << "Wprowadz dane\n";
	cout << "Imie pracownika: ";
	cin >> imie;
	cout << "Nazwisko pracownika: ";
	cin >> nazwisko;
	cout << "Data urodzenia pracownika: ";
	cin >> data;
	cout << "Plec pracownika: ";
	cin >> plec;
	cout << "Szkola, w ktorej uczy pracownik: ";
	cin >> szkola;
	cout << "Lata doswiadczenia w zawodzie pracownika: ";
	cin >> lata;
	cout << "Przedmiot, ktory wyklada pracownik: ";
	cin >> przedmiot;
	cout << "Numer sali, ktora pracownik ma pod opieka: ";
	cin >> sala;

	if (x == 2)
	{
		cout << "Wartosc dodatkowej premii wnikajacej z pelnionej funkcji dyrektora: ";
		cin >> premia;
		cout << "Ilosc przyznanych pochwal w tym roku szkolnym: ";
		cin >> pochwaly;
	}
	else if (x == 3)
	{
		cout << "Numer klasy, ktora wychowawca ma pod opieka: ";
		cin >> klasa;
		cout << "Ilosc zebran z rodzicami wyznaczonych przez wychowawce na ten rok szkolny: ";
		cin >> zebrania;
	}
}

void wyprowadzenie(string imie, string nazwisko, string data, string plec, string szkola, int lata, string przedmiot, int sala, double premia, int pochwaly, string klasa, int zebrania, int x)
{
	cout << "\nImie pracownika: " << imie;
	cout << "\nNazwisko pracownika: " << nazwisko;
	cout << "\nData urodzenia pracownika: " << data;
	cout << "\nPlec pracownika: " << plec;
	cout << "\nSzkola, w ktorej uczy pracownik: " << szkola;
	cout << "\nLata doswiadczenia w zawodzie pracownika: " << lata;
	cout << "\nPrzedmiot, ktory wyklada pracownik: " << przedmiot;
	cout << "\nNumer sali, ktora pracownik ma pod opieka: " << sala;

	if (x == 2)
	{
		cout << "\nWartosc dodatkowej premii wnikajacej z pelnionej funkcji dyrektora: " << premia;
		cout << "\nIlosc przyznanych pochwal w tym roku szkolnym: " << pochwaly;
	}
	else if (x == 3)
	{
		cout << "\nNumer klasy, ktora wychowawca ma pod opieka: " << klasa;
		cout << "\nIlosc zebran z rodzicami wyznaczonych przez wychowawce na ten rok szkolny: " << zebrania;
	}
}

void wprowadzenie(string& imie, string& nazwisko, string& data, string& plec, string& szkola, int& lata, string& przedmiot, int& sala, double& premia, int& pochwaly, string& klasa, int& zebrania)
{
	cout << "Podaj, jaka funkcje pelni pracownik:\n";
	cout << "1 - nauczyciel\n";
	cout << "2 - dyrektor\n";
	cout << "3 - nauczyciel wychowawca\n";

	int x;
	cin >> x;

	if (x == 1)
	{
		Nauczyciel pracownik1(imie, nazwisko, data, plec, szkola, lata, przedmiot, sala);
	}
	else if (x == 2)
	{
		Dyrektor pracownik2(imie, nazwisko, data, plec, szkola, lata, przedmiot, sala, premia, pochwaly);
	}
	else if (x == 3)
	{
		Wychowawca pracownik3(imie, nazwisko, data, plec, szkola, lata, przedmiot, sala, klasa, zebrania);
	}

	dane(imie, nazwisko, data, plec, szkola, lata, przedmiot, sala, premia, pochwaly, klasa, zebrania, x);
	wyprowadzenie(imie, nazwisko, data, plec, szkola, lata, przedmiot, sala, premia, pochwaly, klasa, zebrania, x);
}

int main()
{
	string imie, nazwisko, data, plec, szkola, przedmiot, klasa;
	int lata, sala, pochwaly, zebrania;
	double premia;

	wprowadzenie(imie, nazwisko, data, plec, szkola, lata, przedmiot, sala, premia, pochwaly, klasa, zebrania);
	return 0;
}