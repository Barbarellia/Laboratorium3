#include <iostream>
#include <iomanip>
#include <io.h>    // for _setmode()
#include <fcntl.h> // for _O_U16TEXT
#include "funkcje.h"
using namespace std;

int main()
{
	//zad7
	//int szerPlytki{}, szerSciany{};
	//cout << "Podaj szerokosc plytki: " << endl;
	//cin >> szerPlytki;
	//cout << "Podaj szerokosc sciany: " << endl;
	//cin >> szerSciany;
	//obliczPlytki(szerSciany, szerPlytki);

	//zad6
	//int zaplata{};
	//cout << "Podaj kwote zaplaty: " << endl;
	//cin >> zaplata;
	//double cena{};
	//cout << "Podaj cene towaru: " << endl;
	//cin >> cena;
	//reszta(zaplata, cena);

	////zad5
	//double ile{};
	//cout << "Podaj kwote [PLN], ktora chcesz wymienic w kantorze: " << endl;
	//cin >> ile;
	//ile_moge_kupic(ile);
	 
	////zad4
	//int podstawa{}, wykladnik{};
	//double p{};
	//int wynik{};
	//cout << "Podaj podstawe: ";
	//cin >> podstawa;
	//cout << "Podaj wykladnik: ";
	//cin >> wykladnik;
	//cout << "Wynik potegowania wynosi: " << potega(podstawa, wykladnik) << endl;
	//potega(wynik, podstawa, wykladnik);
	//cout << "Wynik potegowania wynosi: " << wynik << endl;

	//zad2
	int a{}, b{}, n{};
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Najwiekszy wspolny dzielnik wynosi: " << nwd(a, b) << endl;
	 
	////zad3
	cout << "Podaj n: ";
	cin >> n;
	if (czyPierwsza(n)) {
		cout << "Liczba jest pierwsza." << endl;
	}
	else
		cout << "Liczba nie jest pierwsza." << endl;
	for (int i = 0; i < 101; i++) {
		if (czyPierwsza(i) == true)
			cout << i << " ";
	}
}