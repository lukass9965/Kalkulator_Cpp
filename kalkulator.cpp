#include <iostream>
#include <conio.h>
#include <math.h>

int main()
{
   using namespace std;

    int a, b;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "\nPodaj druga liczbe: ";
    cin >>b;

    int M;
    cout << "Aby zobaczyc wszystkie mozliwe operacje wpisz 1 lub"
    << "jesli chcesz wykonac jedna operacje wcisnij 2: ";
    cin >> M;

    if (M == 1){
        cout << "\nDodawanie: " << a+b;
        cout << "\nOdejmowanie: " << a-b;
        cout << "\nMnozenie: " << a*b;
        cout <<"\nDzielenie(a/b): " << a/b;
        cout << "\nDzielenie(b/a): " << b/a;
        cout << "\nPotegowanie(a^b): " << pow(a,b);
        cout << "\nPotegowanie(b^a): " << pow(b,a);
    }

    if (M == 2){
        cout << "Podaj znak operacji jaka chcesz wykonac: ";
        int O =getch() ;

        switch(O){
            case '+': cout << "+\n" << "Wynik to: " << a+b;
                    break;
            case '-': cout << "-\n" << "Wynik to: " << a-b;
                  break;
            case '*': cout << "*\n" << "Wynik to: " << a*b;
                  break;
            case '/': cout << "/\n" << "Wynik to: " << a/b;
                  break;
            case '^': cout << "^" << "Wynik to: " << pow(a,b);
                  break;
            default: cout << "Podaj znak operacji jak¹ chcesz wykonaæ: ";
        }

    }

    return 0;
}
