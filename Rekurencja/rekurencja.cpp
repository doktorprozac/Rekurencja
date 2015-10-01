/*rekurencja*/
#include <iostream>
#include <Windows.h>

using namespace std;


/*potegowanie - rekurencja */

long int potega (int p, int w)
{
	if (w == 0) 
	{
		return 1;
	}
	else
	{
		return p*potega(p,w-1);
	}

}

/*potegowanie - iteracyjnie */

long int potega_it (int w, int ile)
{
	int liczba = 1;
	for (int i=1;i<=ile;i++)
	{
		liczba = liczba*w;
	}
	return liczba;
}

/*fibonacii */
long int fib(int numer)
{
	if (numer == 1 || numer == 2)
	{
		return 1;
	}
	else
	{
		return fib(numer-1) + fib(numer-2);
	}
}

/*fibonacii iteracyjnie */

int fib_iter (int n)
{
int a = 0;
int b = 1;
int wynik = 0;

if (n < 2)
{
	return n;
}
else
{
	for (int i=0;i<n;i++)
	{
	wynik = a + b;
	a = b;
	b = wynik;
	}
}

return wynik;
}

long int silnia(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return silnia(n-1) * n;
	}
}

long int silnia_it (int n)
{
int wynik = 1;

if ( n < 2)
{
	return 1;
}
else
{
for (int i=2;i<=n;i++)
{
	wynik = wynik * i;
}
}
	return wynik;
	
}

int main ()
{
	int p = 0, w = 0, ile = 0, numer = 0, liczba = 0;
	int wybor;
	bool exit = false;

	do
	{

	cout << "MENU: " << endl;
	cout << "1. POTEGOWANIE: " << endl;
	cout << "2. FIBONACCI: " << endl;
	cout << "3. SILNIA: " << endl;
	cout << "wybor: " << endl;
	cin >> wybor;

	

	switch (wybor)
	{
	case 1:
		int wybor1;
		cout << "POTEGOWANIE " << endl;
		cout << "1. METODA ITERACYJNA" << endl;
		cout << "2. METODA REKURENCYJNA: " << endl;
		cout << "3. WYJSCIE: " << endl;
		cout << "wybor: " << endl;
		cin >> wybor1;

	
		switch (wybor1)
		{
		case 1:
			cout << "Podaj wykladnik: " << endl;
			cin >> w;
			cout << "Podaj ile elementow: " << endl;
			cin >> ile;
			cout << "wynik: " << potega_it (w, ile) << endl;
			Sleep(5000);
			system("CLS");

			break;

		case 2:
			cout << "Podaj potega: " << endl;
			cin >> p;
			cout << "Podaj wykladnik: " << endl;
			cin >> w;
			cout << "wynik: " << potega (p,w) << endl;
			Sleep(5000);
			system("CLS");

			break;

		case 3:
			exit = true;
			system("CLS");
			break;
		}
		

	break;

	case 2:
		int wybor;
		cout << "FIBONACII " << endl;
		cout << "1. METODA ITERACYJNA" << endl;
		cout << "2. METODA REKURENCYJNA: " << endl;
		cout << "3. WYJSCIE: " << endl;
		cout << "wybor: " << endl;
		cin >> wybor;

		switch (wybor)
		{
		case 1:
			cout << "Podaj jaki element chcesz wyznaczyc w ciagu fibonacciego: " << endl;
			cin >> numer;
			cout << "element " << numer << " ma wartosc: " << fib_iter(numer) << endl;
			Sleep(5000);
			system("CLS");
			break;
		case 2:
			cout << "Podaj jaki element chcesz wyznaczyc w ciagu fibonacciego: " << endl;
			cin >> numer;
			cout << "element " << numer << " ma wartosc: " << fib(numer) << endl;
			Sleep(5000);
			system("CLS");
			break;

		case 3:
			exit = true;
			system("CLS");
			break;
		}
		break;
		

	case 3:
		do
		{
		cout << "SILNIA " << endl;
		cout << "1. METODA ITERACYJNA" << endl;
		cout << "2. METODA REKURENCYJNA: " << endl;
		cout << "3. WYJSCIE: " << endl;
		cout << "wybor: " << endl;
		cin >> wybor;
		switch (wybor)
		{
		case 1:
			cout << "Podaj liczbe, z ktorej chcesz wyznaczyc silnie: " << endl;
			cin >> liczba;
			cout << liczba << " ! " << " = " << silnia_it (liczba) << endl; 
			Sleep(5000);
			system("CLS");
			break;
		case 2:
			
			cout << "Podaj liczbe, z ktorej chcesz wyznaczyc silnie: " << endl;
			cin >> liczba;
			cout << liczba << " ! " << " = " << silnia (liczba) << endl;
			Sleep(5000);
			system("CLS");
			break;

		case 3:
			exit = true;
			system("CLS");
			break;
		}
		}
		while(!exit);
		break;

	}
	}
	while (true);

	cin.get();
	cin.get();
	return 0;
}