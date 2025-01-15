#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
// Функция для проверки, является ли строка целым числом
bool proverkastr(const string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] < '0' || str[i] > '9') {
            return false; // Нецифровой символ найден
        }
    }
    return true;
}
// Функция для создания массива чисел от 1 до n
long long* sozdmas(int n) {
    long long* massiv = new long long[n];
    for (int i = 0; i < n; i++) {
        massiv[i] = i + 1; // Заполняем массив числами от 1 до n
    }
    return massiv;
}
// Функция для возведения элементов массива в квадрат
void kvmas(long long* massiv, int n) {
    for (int i = 0; i < n; i++) {
        massiv[i] = massiv[i] * massiv[i]; // Возводим в квадрат
    }
}
// Функция для преобразования числа в строку
string longlongtostring(long long num) {
    return to_string(num);
}
// Функция для получения длины строки
int dlinastr(const string& str) {
    return str.length();
}
// Функция для преобразования строки в массив цифр
void stringtomas(const string& str, int* massiv, int& size) {
    size = dlinastr(str);
    for (int i = 0; i < size; i++) {
        massiv[size - i - 1] = str[i] - '0'; // Заполняем массив с конца
    }
}
// Функция для сложения двух массивов цифр (длинная арифметика)
void slozh(const int* a, int size_a, const int* b, int size_b, int* result, int& result_size) {
    int c = 0; // Перенос
    result_size = (size_a > size_b ? size_a : size_b) + 1; // Резервируем место в случае переноса
    for (int i = 0; i < result_size; i++) {
        int sum = c; // Сумма с учетом переноса
        if (i < size_a) { // Не дошли до конца а
            sum += a[i]; // Добавляем цифру первого числа
        }
        if (i < size_b) {
            sum += b[i];
        }
        result[i] = sum % 10; // Текущий разряд
        c = sum / 10; // Следующий перенос
    }
    if (result[result_size - 1] == 0 && result_size > 1) {
        result_size--; // Убираем лишний ноль, если последний элемент массива 0 и размер больше 1, уменьшаем размер
    }
}
// Функция для преобразования массива цифр обратно в строку
void mastostring(const int* massiv, int size, string& result) {
    result.clear();
    for (int i = size - 1; i >= 0; i--) {
        result += to_string(massiv[i]); // Добавляем цифру в строку с конца
    }
}
