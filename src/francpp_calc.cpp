#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

void showMenu() {
    cout << "Wybierz operację:" << endl;
    cout << "1. Dodawanie (+)" << endl;
    cout << "2. Odejmowanie (-)" << endl;
    cout << "3. Mnożenie (*)" << endl;
    cout << "4. Dzielenie (/)" << endl;
    cout << "5. Wyjście" << endl;
    cout << "Twój wybór: ";
}

double performOperation(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if(b != 0) {
                return a / b;
            } else {
                cout << "Błąd: dzielenie przez zero!" << endl;
                return std::numeric_limits<double>::infinity(); // Zwróci nieskończoność
            }
        default:
            cout << "Nieznany operator!" << endl;
            return 0;
    }
}

int main() {
    double num1, num2;
    char op;
    int choice;

    do {
        showMenu();
        cin >> choice;

        if(choice == 5) {
            cout << "Kończę działanie programu..." << endl;
            break;
        }

        if(choice < 1 || choice > 4) {
            cout << "Nieprawidłowy wybór! Spróbuj ponownie." << endl;
            continue;
        }

        cout << "Podaj pierwszą liczbę: ";
        cin >> num1;
        cout << "Podaj operator (+, -, *, /): ";
        cin >> op;
        cout << "Podaj drugą liczbę: ";
        cin >> num2;

        double result = performOperation(num1, num2, op);

        if (result == std::numeric_limits<double>::infinity()) {
            continue; // Jeśli błąd dzielenia przez zero, wróci do menu
        }

        cout << "Wynik: " << result << endl;
        cout << endl;

    } while(true);

    return 0;
}
