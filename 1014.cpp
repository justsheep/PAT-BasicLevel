/*
1014 ����Ħ˹��Լ�� ��20 �֣�
����̽����Ħ˹�ӵ�һ����ֵ�����������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm������̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�������� 14:04����Ϊǰ�����ַ����е� 1 ����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ� 4 ����ĸ D�����������ģ��� 2 ����ͬ���ַ��� E �����ǵ� 5 ��Ӣ����ĸ������һ����ĵ� 14 ����ͷ������һ��� 0 �㵽 23 �������� 0 �� 9���Լ���д��ĸ A �� N ��ʾ�����������ַ����� 1 ����ͬ��Ӣ����ĸ s �����ڵ� 4 ��λ�ã��� 0 ��ʼ�������ϣ������� 4 ���ӡ��ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣

�����ʽ��
������ 4 ���зֱ���� 4 ���ǿա��������ո��ҳ��Ȳ����� 60 ���ַ�����

�����ʽ��
��һ�������Լ���ʱ�䣬��ʽΪ DAY HH:MM������ DAY ��ĳ���ڵ� 3 �ַ���д���� MON ��ʾ����һ��TUE ��ʾ���ڶ���WED ��ʾ��������THU ��ʾ�����ģ�FRI ��ʾ�����壬SAT ��ʾ��������SUN ��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣

����������
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
���������
THU 14:04
*/

#include<iostream>
using namespace std;

int main() {
	char a[64] = { 0 }, b[64] = { 0 }, c[64] = { 0 }, d[64] = { 0 };
	char day[7][4] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int flag = 0, idx = 0;
	scanf("%s %s %s %s", a, b, c, d);
	for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
		if (!flag && a[i] >= 'A' && a[i] <= 'G' && b[i] == a[i]) {
			cout << day[a[i] - 'A'] << " ";
			flag = 1;
			continue;
		}
		if (flag && a[i] >= 'A' && a[i] <= 'N' && b[i] == a[i]) {
			cout << a[i] - 'A' + 10 << ":";
			break;
		}
		if (flag && a[i] >= '0' && a[i] <= '9' && b[i] == a[i]) {
			cout << "0" << a[i] - '0' << ":";
			break;
		}
	}
	for (int i = 0; c[i] != '\0' || d[i] != '\0'; i++) {
		if (c[i] >= 'a' && d[i] <= 'z' && c[i] == d[i]) {
			if (idx < 10)
				cout << "0" << idx;
			else
				cout << idx;
			break;
		}
		idx++;
	}
	return 0;
}