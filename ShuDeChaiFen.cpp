//���P2404 ��Ȼ���Ĳ������
#include<iostream>
#include<stdio.h>
using namespace std;
typedef long long ll;
int p[10];
int n;

//���
void print(int m) {
	for (int i = 1; i <= m - 1; ++i)
		printf("%d+",p[i]);
	printf("%d\n",p[m]);
}

void dfs(int k, int m, int z) {
	//k��ʾ��ѡ����,m��ʾ��ѡ��֮�ͣ�z��ʾ��z����
	if (k == n) return;//�����������
	if (m == n) {
		print(z - 1);//��ǰ��ѡ��֮�͵���n,��������(z-1����֮��)
		return;
	}
	for (int i = k; i <= n - m; ++i) {
		p[z] = i;//��¼��ǰѡ����
		dfs(i, m + i, z + 1);
	}
}

int main()
{
	cin >> n;
	dfs(1, 0, 1);//��ǰ��1��ʼ,��ʼ��ѡ��֮��Ϊ0,�����ǵ�1����
	return 0;
}
