#include<math.h>
#include <iostream>
#include <io.h>    // for _setmode()
#include <fcntl.h> // for _O_U16TEXT
#include "funkcje.h"
using namespace std;

//int potega(int podstawa, int wykladnik = 2) {
//	return pow(podstawa, wykladnik);
//}
//double potega(double podstawa, int wykladnik = 2) {
//	return pow(podstawa, wykladnik);
//}
//void potega(int& wynik, int podstawa, int wykladnik) {
//	wynik = pow(podstawa, wykladnik);
//}

int nwd(int a, int b) {
	int r=1;

	if (b == 0)
		return a;
	else {
		r = a % b;
		return nwd(b, r);
	}
}

bool czyPierwsza(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

//void ile_moge_kupic(double zlotowki = 100) {
//	double ile_euro, ile_dolar, ile_korona;
//	ile_euro = zlotowki / euro;
//	ile_dolar = zlotowki / dolar;
//	ile_korona = zlotowki / korona;
//
//	cout << "Za " << zlotowki << " zl mozesz kupic: " << endl;
//	cout << "***********************************************" << endl;
//	cout << ile_euro << " euro," << endl;
//	cout << ile_dolar << " dolarow," << endl;
//	cout << ile_korona << " koron norweskich." << endl;
//	cout << "***********************************************" << endl;
//}

//void reszta(int zaplata, double cena) {
//	int liczba_1zl{}, liczba_50gr{}, liczba_20gr{}, liczba_10gr{};
//	double reszta{};
//
//	reszta = (double)zaplata - cena;
//	cout << "Reszta: " << reszta << endl;
//
//	liczba_1zl = (int)reszta;
//	cout << "Liczba 1zl: " << liczba_1zl << endl;
//
//	reszta = reszta - (double)liczba_1zl;
//	reszta *= 100;
//	liczba_50gr = (int)reszta / 50;
//	cout << "Liczba 50gr: " << liczba_50gr << endl;
//
//	reszta = reszta - liczba_50gr * 50;
//	liczba_20gr = reszta / 20;
//	cout << "Liczba 20gr: " << liczba_20gr << endl;
//
//	reszta = reszta - liczba_20gr * 20;
//	liczba_10gr = reszta / 10;
//	cout << "Liczba 10gr: " << liczba_10gr << endl;
//}

void obliczPlytki(int szerSciany, int szerPlytki) {
	//szerSciany = 2*x + (2n+1) * szerPlytki
	//szukamy nieparzystej liczby plytek, a reszte dzielimy przez 2
	int liczbaPlytek{};
	double odstep{};
	liczbaPlytek = szerSciany / szerPlytki;
	if (liczbaPlytek % 2 == 0) {
		liczbaPlytek--;
	}
	odstep = (szerSciany - liczbaPlytek * szerPlytki) / 2.0;

	cout << "Liczba plytek: " << liczbaPlytek << endl;
	cout << "Odstep: " << odstep << endl;

	cout << endl << "| ";
	for (int i = 0; i < liczbaPlytek-1; i++) {
		_setmode(_fileno(stdout), _O_U16TEXT);
		wcout << L'\x2588';
		wcout << L'\x2591';
	}
	wcout << L'\x2588';
	wcout << " |";
}