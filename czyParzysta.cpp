// TODO: testable function definition second modification

// Funkcja sprawdza czy liczba podanag przez uzytkownika to liczba parzysta

#include <iostream>
#include <vector>

using namespace std;

bool czyParzysta(int liczba) {
    return liczba % 2 == 0;
}

int main() {
    int liczba;

    // Pobierz liczbę od użytkownika
    cout << "Podaj liczbe: ";
    cin >> liczba;

    // Wywołaj funkcję czyParzysta i wyświetl wynik
    if (czyParzysta(liczba)) {
        cout << "True" << endl;
    } else {
        cout << "False." << endl;
    }

    return 0;
}
