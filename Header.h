#include <iostream>
#include <string>
using namespace std;

// ������� ��� ��������, �������� �� ������ ����� ������
bool proverkastr(const string& str);

// ������� ��� �������� ������� ����� �� 1 �� n
long long* sozdmas(int n);

// ������� ��� ���������� ��������� ������� � �������
void kvmas(long long* massiv, int n);

// ������� ��� �������������� ����� � ������
string longlongtostring(long long num);

// ������� ��� ��������� ����� ������
int dlinastr(const string& str);

// ������� ��� �������������� ������ � ������ ����
void stringtomas(const string& str, int* massiv, int& size);

// ������� ��� �������� ���� �������� ���� (������� ����������)
void slozh(const int* a, int size_a, const int* b, int size_b, int* result, int& result_size);

// ������� ��� �������������� ������� ���� ������� � ������
void mastostring(const int* massiv, int size, string& result);
