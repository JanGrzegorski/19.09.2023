
#include <iostream>
using namespace std;
void opisKalkulatora();//deklaracja funkcji nic nie zwracającej
float dodawanie(float liczba1, float liczba2);
float odejmowanie(float liczba1, float liczba2);
int main()
{
	float liczba1, liczba2;
	opisKalkulatora();
	cout << "Podaj liczba1 = "; cin >> liczba1;
	cout << "Podaj liczba2 = "; cin >> liczba2;
	cout << "Dodawanie = " << dodawanie(liczba1, liczba2) << endl;

}
void opisKalkulatora() {
	cout << "Jan Grzegorski:Ver 2 Kalkulatora" << endl;

}
float dodawanie(float liczba1, float liczba2)
{
	return liczba1 + liczba2;
}