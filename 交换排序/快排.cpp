#include<iostream>
using namespace std;

void m_swap(int *a,int *b);

void  kuaipai(int *a, int left,int right) {
	if (right < left)return;
	int m_pivot = left;
	int m_left = left;
	int m_right = right;

	while (left < right)
	{		
		while (a[right] >= a[m_pivot] && right != m_pivot) {
			right--;
		}
		while (a[left] <= a[m_pivot] && left < right) {
			left++;
		}	
		if (left < right) {
			m_swap(&a[left], &a[right]);
		}
	}
	m_swap(&a[m_pivot], &a[right]);
	m_pivot = right;

	kuaipai(a, m_left, m_pivot - 1);
	kuaipai(a, m_pivot + 1, m_right);

}
void m_swap(int *a, int *b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int a[] = { 9,8,4,6,2,1,3,5,7,0 };
	int len = sizeof(a) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	kuaipai(a, 0, len-1);
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}
