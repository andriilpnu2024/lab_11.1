#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int Count(char* str);
void PrintTXT(char* fname);
void CreateTXT(char* fname);

int main()
{
	char fname[101];
	cout << "enter file name 1: "; cin >> fname;
	CreateTXT(fname); // ����� ����� ����� � ���������
	PrintTXT(fname);
	cout << "String contained " << Count(fname) << " elements of 'BASIC'" << endl;

	return 0;
}
int Count(char* str)
{
	ifstream fin(str); // ������� ���� ��� ����������
	string s;
	int k = 0;
	while (getline(fin, s))
	{
		for (unsigned j = 0; j < s.length(); j++)
		{
			if (s[j] == 'B' || s[j] == 'A' || s[j] == 'S' || s[j] == 'I' || s[j] == 'C')
			{
				k++;
			}
		}
	}
	return k;
}
void CreateTXT(char* fname) // ��������� ����� � �������� �����
{
	ofstream fout(fname); // ������� ���� ��� ������
	char ch; // ������� ����������� � �� ������������ ��������
	string s; // �������� ������������ �����
	do
	{
		cin.get(); // ������� ����� ��������� � ��� �� ���� �������
		cin.sync(); // "����� �����", ���� ��������� ���� ����� �����
		cout << "enter line: "; getline(cin, s); // ����� �����
		fout << s << endl; // �������� ���� � ����
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}
void PrintTXT(char* fname) // ��������� ����� �� �����
{
	ifstream fin(fname); // ������� ���� ��� ����������
	string s; // ���������� �����
	while (getline(fin, s)) // ���� ����� ��������� �����
	{
		cout << s << endl; // �������� ���� �� �����
	}
	cout << endl;
}