#include <iostream>
using namespace std;

void AddRightDigit(int D, int& K) {
    K = K * 10 + D;
    cout << "Результат добавления цифры " << D << ": " << K << endl;
}

int main() {

    locale::global(locale("Russian_Russia.1251"));

    int D, K, D1, D2;

    while (true) {
        cout << "Введите число K: ";
        cin >> K;

        if (cin.fail() || K < 0 || cin.peek() != '\n') {
            cout << "Пожалуйста, введите целое положительное число." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка ввода
        }
        else {
            break;
        }
    }

    while (true) {
        cout << "Введите число D: ";
        cin >> D;

        if (cin.fail() || D > 9 || D < 0) {
            cout << "Пожалуйста, введите цифру от 0 до 9." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка ввода
        }
        else {
            break;
        }
    }

    AddRightDigit(D, K);

    while (true) {
        cout << "Введите число D1: ";
        cin >> D1;

        if (cin.fail() || D1 > 9 || D1 < 0) {
            cout << "Пожалуйста, введите цифру от 0 до 9." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка ввода
        }
        else {
            break;
        }
    }

    AddRightDigit(D1, K);

    while (true) {
        cout << "Введите число D2: ";
        cin >> D2;

        if (cin.fail() || D2 > 9 || D2 < 0) {
            cout << "Пожалуйста, введите цифру от 0 до 9." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очистка ввода
        }
        else {
            break;
        }
    }

    AddRightDigit(D2, K);

    return 0;
}