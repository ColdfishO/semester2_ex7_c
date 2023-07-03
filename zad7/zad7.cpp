#include <iostream>
#include<locale.h>
using namespace std;
void autor(void) {
    cout <<endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
template <typename T>
T MinTab(T x[], int size) {
    T a=x[0];
    for (int i = 1;i < size;i++) {
        if (x[i] < a) {
            a = x[i];
        }
    }
    cout<< a << endl;
    return a;
}
template<typename T>
void Zamiana(T& x, T& y) {
    T a = x;
    x = y;
    y = a;
}
template<typename T>
class schowek {
private:
    T wart;
public:
    void wczytaj() {
        cin >> wart;
    }
    T wartosc() {
        return wart;
    }
};
int main() {
    schowek<int> calosci;
    schowek<int> calkowite;
    schowek<double> przecinkowe;
    schowek<char> litery;
    int a = 12, b = 28;
    double c=2.66, d=5.213;
    char e = 'f', f = 'z';
    int cal[10] = { 8, 7, 9, 10, 4, 6, 10, 4, 2, 9};
    double zmien[10] = { 5.4, 6.4, 2.77, 2.77, 3.14, 2.348, 2.01, 1.17, 0.765, 0.23 };
    char lit[10] = {'a', 'b', 'f', 'g', 'f', '!', 'b', 'j', 'z', 'h'};
    setlocale(LC_ALL, "");
    autor();
    cout << "Wpisz liczbę całkowitą: ";
    calosci.wczytaj();
    cout << "Wpisz drugą liczbę całkowitą: ";
    calkowite.wczytaj();
    cout << "Wpisz liczbę zmiennoprzecinkową: ";
    przecinkowe.wczytaj();
    cout << "Wpisz literę/znak: ";
    litery.wczytaj();
    cout << "\nNajmniejsza wartość tabeli typu int" << endl;
    MinTab<int>(cal, 10);
    cout << "Najmniejsza wartość tabeli typu double" << endl;
    MinTab<double>(zmien, 10);
    cout << "Najmniejsza wartość tabeli typu char" << endl;
    MinTab<char>(lit, 10);
    cout << "\n";
    cout << "Pierwsza zmienna: " << a << " druga zmienna: " << b << endl;
    Zamiana<int>(a,b);
    cout << "Pierwsza zmienna: " << a << " druga zmienna: " << b << endl << endl;
    cout << "Pierwsza zmienna: " << c << " druga zmienna: " << d << endl;
    Zamiana<double>(c,d);
    cout << "Pierwsza zmienna: " << c << " druga zmienna: " << d << endl << endl;
    cout << "Pierwsza zmienna: " << e << " druga zmienna: " << f << endl;
    Zamiana<char>(e,f);
    cout << "Pierwsza zmienna: " << e << " druga zmienna: " << f << endl << endl;
    a = calosci.wartosc();
    c = przecinkowe.wartosc();
    e = litery.wartosc();
    b = calkowite.wartosc();
    cout << "Schowek calosci przechowuje " << a << " schowek przecinkowe " << c << ", a schowek litery " << e << endl<<endl;
    cout << "Pierwszy obiekt: " << a << " drugi obiekt: " << b << endl;
    Zamiana< schowek<int> >(calosci, calkowite);
    a = calosci.wartosc();
    b = calkowite.wartosc();
    cout << "Pierwszy obiekt: " << a << " drugi obiekt: " << b << endl << endl;;
    system("pause");
    return 0;
}