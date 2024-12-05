#include "lib.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Hamming Code Program (8/4)" << endl;
    cout << "==========================" << endl;

    // Ввод 4 информационных битов
    cout << "Enter 4 data bits (0 or 1): ";
    vector<int> data(4);
    for (int i = 0; i < 4; i++) {
        cin >> data[i];
    }

    // Вызов функции работы с кодом Хэмминга
    hamming_code(data);

    return 0;
}
