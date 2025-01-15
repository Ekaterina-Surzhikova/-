#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
// ������� ��� ��������, �������� �� ������ ����� ������
bool proverkastr(const string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] < '0' || str[i] > '9') {
            return false; // ���������� ������ ������
        }
    }
    return true;
}
// ������� ��� �������� ������� ����� �� 1 �� n
long long* sozdmas(int n) {
    long long* massiv = new long long[n];
    for (int i = 0; i < n; i++) {
        massiv[i] = i + 1; // ��������� ������ ������� �� 1 �� n
    }
    return massiv;
}
// ������� ��� ���������� ��������� ������� � �������
void kvmas(long long* massiv, int n) {
    for (int i = 0; i < n; i++) {
        massiv[i] = massiv[i] * massiv[i]; // �������� � �������
    }
}
// ������� ��� �������������� ����� � ������
string longlongtostring(long long num) {
    return to_string(num);
}
// ������� ��� ��������� ����� ������
int dlinastr(const string& str) {
    return str.length();
}
// ������� ��� �������������� ������ � ������ ����
void stringtomas(const string& str, int* massiv, int& size) {
    size = dlinastr(str);
    for (int i = 0; i < size; i++) {
        massiv[size - i - 1] = str[i] - '0'; // ��������� ������ � �����
    }
}
// ������� ��� �������� ���� �������� ���� (������� ����������)
void slozh(const int* a, int size_a, const int* b, int size_b, int* result, int& result_size) {
    int c = 0; // �������
    result_size = (size_a > size_b ? size_a : size_b) + 1; // ����������� ����� � ������ ��������
    for (int i = 0; i < result_size; i++) {
        int sum = c; // ����� � ������ ��������
        if (i < size_a) { // �� ����� �� ����� �
            sum += a[i]; // ��������� ����� ������� �����
        }
        if (i < size_b) {
            sum += b[i];
        }
        result[i] = sum % 10; // ������� ������
        c = sum / 10; // ��������� �������
    }
    if (result[result_size - 1] == 0 && result_size > 1) {
        result_size--; // ������� ������ ����, ���� ��������� ������� ������� 0 � ������ ������ 1, ��������� ������
    }
}
// ������� ��� �������������� ������� ���� ������� � ������
void mastostring(const int* massiv, int size, string& result) {
    result.clear();
    for (int i = size - 1; i >= 0; i--) {
        result += to_string(massiv[i]); // ��������� ����� � ������ � �����
    }
}