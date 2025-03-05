#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;  // El nombre del arreglo es un puntero al primer elemento

    cout << "Accediendo al arreglo usando índice: " << arr[4] << endl;
    cout << "Accediendo al arreglo usando puntero: " << *(ptr + 4) << endl;

    return 0;
}
