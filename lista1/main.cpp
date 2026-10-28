#include <iostream>

using namespace std;
// pierweszy program
int main()
{   int NumerZadania = 0;
    bool koniec = false;
    while (!koniec) {
        cout << "Podaj numer zadania: ";
        cin >> NumerZadania;
        switch (NumerZadania)
        {
            case 0: koniec = true; break;
            case 1: Zadanie01() ; break;
            case 2: Zadanie02() ; break;
            case 3: Zadanie03() ; break;
            case 4: Zadanie04() ; break;
            default: break;
        }

    };
    cout << "Koniec Zadania" << endl;
    return 0;
}

void Zadanie01();
{
    cout << "Adres\n" << endl;
}
void Zadanie02();
{

}

