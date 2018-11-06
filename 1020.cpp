/*
1020 �±� ��25 �֣�
�±����й���������ѽ�ʱ�Ե�һ�ִ�ͳʳƷ����ͬ���������಻ͬ��ζ���±����ָ������������±��Ŀ���������ۼۡ��Լ��г�����������������������Ի�õ���������Ƕ��١�

ע�⣺����ʱ����ȡ��һ���ֿ�档���������������������ģ����������� 3 ���±����������ֱ�Ϊ 18��15��10 ��֣����ۼ۷ֱ�Ϊ 75��72��45 ��Ԫ������г������������ֻ�� 20 ��֣���ô��������������Ӧ��������ȫ�� 15 ��ֵ� 2 ���±����Լ� 5 ��ֵ� 3 ���±������ 72 + 45/2 = 94.5����Ԫ����

�����ʽ��
ÿ���������һ������������ÿ�����������ȸ���һ�������� 1000 �������� N ��ʾ�±������������Լ������� 500�������Ϊ��λ���������� D ��ʾ�г���������������һ�и��� N ��������ʾÿ���±��Ŀ�����������Ϊ��λ�������һ�и��� N ��������ʾÿ���±������ۼۣ�����ԪΪ��λ�������ּ��Կո�ָ���

�����ʽ��
��ÿ�������������һ�������������棬����ԪΪ��λ����ȷ��С����� 2 λ��

����������
3 20
18 15 10
75 72 45
���������
94.50
*/

#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

struct yue {
	int num;
	double price;
};

bool cmp(yue a, yue b) {
	return a.price / a.num > b.price / b.num;
}

int main() {
	yue bing[1000];
	int n, d, give = 0, idx = 0;
	double total = 0.0;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> bing[i].num;
	for (int i = 0; i < n; i++)
		cin >> bing[i].price;
	sort(bing, bing + n, cmp);
	while (give <= d) {
		if (give + bing[idx].num < d)
			total += bing[idx].price;
		else
			total += bing[idx].price / bing[idx].num * (d - give);
		give += bing[idx].num;
		idx++;
	}
	cout << fixed << setprecision(2) << total;
	return 0;
}