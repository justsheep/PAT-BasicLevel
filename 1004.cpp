/*
1004 成绩排名 （20 分）
读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：
每个测试输入包含 1 个测试用例，格式为

第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
第 3 行：第 2 个学生的姓名 学号 成绩
... ... ...
第 n+1 行：第 n 个学生的姓名 学号 成绩
其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

输出格式：
对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。

输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	int n, score[100] = { 0 }, max = 0, min = 100, idx_max = 0, idx_min = 0;
	string name[100], num[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name[i] >> num[i] >> score[i];
		if (score[i] > max) {
			max = score[i];
			idx_max = i;
		}
		if (score[i] < min) {
			min = score[i];
			idx_min = i;
		}
	}
	cout << name[idx_max] << " " << num[idx_max] << endl;
	cout << name[idx_min] << " " << num[idx_min] << endl;
	return 0;
}