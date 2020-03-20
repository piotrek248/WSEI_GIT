#include <iostream>

using namespace std;

int main() {
    // Deklaracja funkcji
    float funty_na_pln(float funty, float kurs);
    float pln_na_funty(float pln, float kurs);
    // Deklaracja zmiennych
    float kurs, funty, pln;
    short int wybor;

    cout << "Program przelicza GBP/PLN PLN/GBP po kursie"<<endl;
    cout << "Wybierz opcje: \n 1 - GBP/PLN \n 2 - PLN/GBP" << endl; cin >> wybor;

    switch (wybor){
        case 1:
            cout << "Wprowadź aktualny kurs GBP/PLN"; cin >> kurs;
            cout << "Ile funtów chcesz wymienić?"; cin >> funty;
            cout << "Za " << funty << " funtów otrzymasz " << funty_na_pln(funty, kurs) << " złotych.";
            break;
        case 2:
            cout << "Wprowadź aktualny kurs PLN/GBP"; cin >> kurs;
            cout << "Ile złotych chcesz wymienić?"; cin >> pln;
            cout << "Za " << pln << " złotych otrzymasz " << pln_na_funty(pln, kurs) << " funtów.";
            break;
    }

    return 0;
}
// Funkcja przeliczająca funty na złotówki po kursie
float funty_na_pln(float funty, float kurs){
    return funty*kurs;
}
// Funkcja przeliczająca złotówki na funty
float pln_na_funty(float pln, float kurs){
    return pln*kurs;
}