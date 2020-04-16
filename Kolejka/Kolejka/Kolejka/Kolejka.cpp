#include "pch.h"
#include <queue>
#include <iostream>
#include <conio.h>
#include <algorithm>   
#include <vector> 
#include <cstdlib>
#include <locale.h>

using namespace std;


queue < int > kolejkaLiczb;

int liczba, liczba1, liczba2, liczba3, liczba4;
int Random()
{ 
	return (rand() % 100); 
}

void Teoria()
{
	int wybor;
	do
	{
		cout << "Kolejka to liniowa struktura danych, w której nowe dane dopisywane są na końcu kolejki, " << endl;
		cout << "a z początku kolejki pobierane są dane do dalszego przetwarzania" << endl;
		cout << "zwana również FIFO(ang.First In First Out – pierwszy wchodzi, pierwszy wychodzi)" << endl << endl;
		cout << "Wciśnij cyfrę 0, żeby wrócić do menu ";
		cin >> wybor;
		system("cls");
	} while (wybor != 0);

	
}
void TworzenieKolejki()
{
	cout << "Podaj 5 liczb: ";
	cin >> liczba >> liczba1 >> liczba2 >> liczba3 >> liczba4;

	kolejkaLiczb.push(liczba);
	kolejkaLiczb.push(liczba1);
	kolejkaLiczb.push(liczba2);
	kolejkaLiczb.push(liczba3);
	kolejkaLiczb.push(liczba4);


	cout << "Pierwsza liczba w kolejce to: " << kolejkaLiczb.front() << endl;

	cout << "Ostatnia liczba w kolejce to: " << kolejkaLiczb.back() << endl;

	cout << "W kolejce znajduje sie " << kolejkaLiczb.size() << " liczb." << endl;
	_getch();
	system("cls");
}

void display_menu_operations()
{
	int wybor;
	int ilosc_posortowanych_liczb;
	int n_element_posortowanych_liczb;
	int czestotliwosc_count;
	int ilosc_elementow_do_zerowania;
	int ilosc_zerowania = 0;

	int tabint[] = { liczba, liczba1, liczba2, liczba3, liczba4 };


	vector<int> vektor(tabint, tabint + 5);

	auto result = minmax_element(vektor.begin(), vektor.end());

	do
	{
		cout << "Co chcesz wyświetlić?" << endl;
		cout << "1.Sortowanie calosci" << endl;  //[15:15]
		cout << "2.Sortowanie pierwszych wybranych paru liczb" << endl; //[15:30]
		cout << "3.Sortowanie do n-tego elementu" << endl; //[16:00]
		cout << "4.Sortowanie poprzez permutacje" << endl; //[18:55][21:25]
		cout << "5.Warości min-max" << endl; //[32:45]
		cout << "6.Liczenie ile razy pojawiła się dana liczba" << endl; //[22:40]
		cout << "7.Wygeneruj nowy zespoł liczb" << endl; //
		cout << "8.Wyświetl liczby" << endl; //
		cout << "9.Dodaj liczby z pamięci podręcznej do kolejki." << endl;
		cout << "10. Wyzeruj kolejkę" << endl;
		cout << "11. Wróć do menu" << endl;
		cout << "Wybieram : ";
		cin >> wybor;
		system("cls");


		switch (wybor)
		{
		case 1:
			sort(vektor.begin(), vektor.begin() + 5);
			for (vector<int>::iterator it = vektor.begin(); it != vektor.end(); ++it)
				cout << ' ' << *it;
			cout << '\n';  //dziala
			break;
		case 2:

			cout << "Ile pierwszych liczb chcesz posortować?" << endl;
			cin >> ilosc_posortowanych_liczb;			

			partial_sort(vektor.begin(), vektor.begin() + ilosc_posortowanych_liczb, vektor.end());
			for ( vector<int>::iterator it = vektor.begin(); it != vektor.end(); ++it)
				 cout << ' ' << *it;
			 cout << '\n'; //dziala
			break;
		case 3:
			cout << "Do którego elementu posortować?" << endl;
			cin >> n_element_posortowanych_liczb;
			nth_element(vektor.begin(), vektor.begin() + n_element_posortowanych_liczb, vektor.end());
			for ( vector<int>::iterator it = vektor.begin(); it != vektor.end(); ++it)
				 cout << ' ' << *it; //nie jestem pewien czy działa? Bo spełnia funkcje nth_element ale również sortuje całościowo
			 cout << '\n';
			break;
		case 4:
			do {
				prev_permutation(vektor.begin(), vektor.end());
			} while (!is_sorted(vektor.begin(), vektor.end()));
			for (vector<int>::iterator it = vektor.begin(); it != vektor.end(); ++it)
				cout << ' ' << *it;			//działa
			break;
		case 5:  
			cout << "Minimalnym elementem jest " << *result.first;
			cout << " na pozycji " << (result.first - vektor.begin()) << '\n';
			cout << "Maksymalnym elementem jest " << *result.second;
			cout << " na pozycji " << (result.second - vektor.begin()) << '\n';  //działa
			break;
		case 6:
			cout << "Częstotliwość jakiej liczby zmierzyć?" << endl;
			cin >> czestotliwosc_count;
			 cout << czestotliwosc_count << "pojawia się " << count(vektor.begin(), vektor.end(), czestotliwosc_count) << " razy.\n";
			break;
		case 7:
			generate(vektor.begin(), vektor.end(), Random);
			for ( vector<int>::iterator it = vektor.begin(); it != vektor.end(); ++it)
				 cout << ' ' << *it;  //działa
			 cout << '\n';

			break;
		case 8:
			for (vector<int>::iterator it = vektor.begin(); it != vektor.end(); ++it)
				cout << ' ' << *it;  //działa
			break;
		case 9:
			kolejkaLiczb.push(vektor[0]);
			kolejkaLiczb.push(vektor[1]);
			kolejkaLiczb.push(vektor[2]);
			kolejkaLiczb.push(vektor[3]);
			kolejkaLiczb.push(vektor[4]);
			cout << "Dane zostały wprowadzone do kolejki " << '\n';  //działa
			cout << "W kolejce znajduje sie " << kolejkaLiczb.size() << " liczb." << endl;
			break;
		case 10:
			while (kolejkaLiczb.empty() == false)
			{
				kolejkaLiczb.pop();
			}			
			cout << "Kolejka została wyzerowana" << '\n';
			break;
		case 11:
			break;
		}
		system("PAUSE");
		system("cls");
	} while (wybor != 11);

}

void display_menu()
{
	int wybor;
	do
	{
		cout << "*******************GLOWNE MENU********************" << endl;
		cout << "1.Kolejka w praktyce" << endl;
		cout << "2.Kolejka w teorii" << endl;
		cout << "3.Wyjscie z programu." << endl;
		cout << "Wybieram : ";
		cin >> wybor;
		system("cls");


		switch (wybor)
		{
		case 1:
			TworzenieKolejki();
			display_menu_operations();
			break;
		case 2:
			Teoria();
			break;
		case 3:
			cout << "Wyjscie z programu." << endl;
			break;
		}
		system("PAUSE");
		system("cls");
	} while (wybor != 3);

}


int main()
{
	setlocale(LC_CTYPE, "Polish");
	display_menu();

	return 0;
}