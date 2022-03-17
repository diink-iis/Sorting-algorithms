#include <iostream>
using namespace std;

int main(int* arr, int size, int temp) {
    setlocale(LC_ALL, "Russian");
    cout << "Введите размерность массива: " << endl;
    cin >> size;

    // Проверка на положительное значение размера массива
    if (size <= 0) {
        cerr << "Invalid size" << endl;
        return 1;
    }

    arr = new int[size]; // выделение памяти под массив

    // Заполнение массива
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // Сортировка массива пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Вывод отсортированного массива на экран
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // освобождение памяти;

    return 0;
}
