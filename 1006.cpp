/*
1006 ������ʽ������� ��15 �֣�
����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n ����ʾ��Ϊ��ĸ�λ���� n��<10����������ʽ�������һ�������� 3 λ�������������� 234 Ӧ�ñ����Ϊ BBSSS1234����Ϊ���� 2 �����١���3 ����ʮ�����Լ���λ�� 4��

�����ʽ��
ÿ������������� 1 ���������������������� n��<1000����

�����ʽ��
ÿ���������������ռһ�У��ù涨�ĸ�ʽ��� n��

�������� 1��
234
������� 1��
BBSSS1234
�������� 2��
23
������� 2��
SS123
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n > 99) {
		int b = n / 100;
		while (b--)
			cout << "B";
	}
	if (n > 9) {
		int s = n % 100 / 10;
		while (s--)
			cout << "S";
	}
	int g = n % 10;
	for (int i = 1; i <= g; i++)
		cout << i;
	return 0;
}