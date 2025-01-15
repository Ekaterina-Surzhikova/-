#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    string n;
    cout << "Введите число n(n >= 20000): ";
    cin >> n;
    // Проверяем данные на корректность
    if (!proverkastr(n)) {
        cout << "Ошибка: введите целое число, больше 20000, не включающее в себя иные знаки и буквы!" << endl;
        return 1;
    }
    int n_int = stoi(n); // Преобразуем строку в целое число
    if (n_int < 20000) {
        cout << "Число n должно быть не менее 20000." << endl;
        return 1; // Завершаем программу с ошибкой
    }
    long long* massiv = sozdmas(n_int); // Создаем массив чисел от 1 до n
    kvmas(massiv, n_int); // Возводим элементы в квадрат
    // Вычисляем сумму
    int resmas[1000]; // Массив для хранения результата
    int ressize = 1;  // Размер массива с результатом
    resmas[0] = 0;    // Начальное значение 0
    for (int i = 0; i < n_int; ++i) {
        string numstr = longlongtostring(massiv[i]); // Преобразуем число в строку
        int nummas[100]; // Массив для хранения цифр числа
        int numsize = 0; // Размер массива цифр
        stringtomas(numstr, nummas, numsize); // Преобразуем строку в массив цифр
        int tempres[1000]; // Временный массив для хранения результата сложения
        int tempsize = 0; // Временный размер
        slozh(resmas, ressize, nummas, numsize, tempres, tempsize); // Складываем текущий результат с новым числом
        for (int j = 0; j < tempsize; ++j) {
            resmas[j] = tempres[j]; // Копируем результат во временный массив
        }
        ressize = tempsize; // Обновляем размер
    }
    // Преобразуем результат обратно в строку
    string sumstr; // строка для хранения результата
    mastostring(resmas, ressize, sumstr); // Преобразуем результат в строку
    cout << "Сумма квадратов: " << sumstr << endl; // Выводим результат на экран
    // Освобождаем память массива
    delete[] massiv;
    return 0; // Успешное завершение программы
}