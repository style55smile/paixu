
#include <iostream>
using namespace std;
void m_swap(int *a, int *b);
void charu(int *a,int len) {
	int pivot = 0;
	for (int i = 0; i < len; i++)
	{
		pivot = i;
		for (int j = i; j >= 0; j--)
		{
			if (a[pivot] < a[j]) {
				m_swap(&a[pivot], &a[j]);
				pivot = j;
			}
		}
		for (int i = 0; i < len; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
void m_swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {

	int a[] = { 9,8,4,6,2,1,3,5,7,0 };
	int len = sizeof(a) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	charu(a, len);
	system("pause");
	return 0;
}
