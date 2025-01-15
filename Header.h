#include <iostream>
#include <string>
using namespace std;

// Функция для проверки, является ли строка целым числом
bool proverkastr(const string& str);

// Функция для создания массива чисел от 1 до n
long long* sozdmas(int n);

// Функция для возведения элементов массива в квадрат
void kvmas(long long* massiv, int n);

// Функция для преобразования числа в строку
string longlongtostring(long long num);

// Функция для получения длины строки
int dlinastr(const string& str);

// Функция для преобразования строки в массив цифр
void stringtomas(const string& str, int* massiv, int& size);

// Функция для сложения двух массивов цифр (длинная арифметика)
void slozh(const int* a, int size_a, const int* b, int size_b, int* result, int& result_size);

// Функция для преобразования массива цифр обратно в строку
void mastostring(const int* massiv, int size, string& result);
