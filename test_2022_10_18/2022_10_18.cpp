//#include<iostream>
//using namespace std;
//int x = 11;
//char ch = '1';
//void fun(int i)
//{
//    int j = 211;
//    int x = 201;
//    cout << "--i=" << i << ",x=" << x << ",ch=" << ch << ",i=" << i << endl;
//}
//int main()
//{
//    fun(x);
//    cout << "--x=" << x << ",ch=" << ch << endl;
//    return 0;
//}


//int main()
//{	
//	//��̬����int��5��int����
//	int* p1 = new int ;
//	int* p2 = new int(6);	//	��̬����һ��int�ռ�,���ռ��ʼ��Ϊ5
//	int* p2 = new int[6];	//	��̬����5��int�ռ�
//
//	delete p1;			//	�ͷŵ����ռ�
//	delete[] p2;		//	�ͷŶ���ռ�
//
//	return 0;
//}


//������Student�࣬���а������ݳ�Ա�����ͷ�������Ա����compare(���ڱȽ�����ѧ���ķ���)��
//��������������n��ѧ������Ϣ�����������߷ֺ���ͷ�ѧ����������������

//#include<iostream>
//using namespace std;
////	ѧ�������ֺͷ���
//class Student
//{
//	//������ݳ�Ա
//	char name[20];	//	����
//	int score,num;	//	����
//
//	//	����/�Ƚϴ�С
//public:
//	void compare(char* x,int j,char* y, int i)	
//	{
//		if (j > i)	//	���ֵ�� j
//		{
//			cout << "ѧ��������" << x << "����Ϊ��" << j << endl;
//			cout << "ѧ��������" << y << "����Ϊ: " << i << endl;
//		}
//		else if(j == i) 
//		{
//			cout << x << "��" << y << "�������" << ",��Ϊ: " << j << endl;
//		}
//		else	//	���ֵ�� i
//		{
//			cout << "ѧ��������" << y << ",����Ϊ��" << i << endl;
//			cout << "ѧ��������" << x << ",����Ϊ: " << j << endl;
//		}
//	}
//};
////	������������,���÷����������
//int main()
//{
//	Student A;
//	int j = 0, i = 0;
//	char x[20], y[20];
//	cout << "������ѧ��������";cin >> x;
//	cout << "������ѧ���ɼ�: ";cin >> j;
//	cout << endl;
//
//	cout << "������ѧ��������";cin >> y;
//	cout << "������ѧ���ɼ�: ";cin >> i;
//	cout << endl;
//
//	A.compare(x, j, y, i);
//
//	return 0;
//}

//46.�Ա�д����ʵ�ֲ�ͬ���������������õĺ�������{ 1��2��3 }��Ϊ
//{ 3��2��1 }�����ں�����������ú������Ԫ�أ��������������¡�

#include<iostream>
using namespace std;

//int tmp(int* a[],double* b[],char* f[])
//{
//	int arr[] = { 0 };
//	int left = 0;
//	int right = sizeof(arr)/sizeof (arr[0]);
//	int j = 0;
//	int i = 0;
//	for (left = 0; left <= right; left++, right--)
//	{
//		arr[left] = left;
//		arr[right] = right;
//	}
//	cout << arr << endl;
//
//	return 0;
//}

//class tmp
//{
//public:
//
//	int f(int a[],int sz)
//	{
//		int temp = 0;
//		int* left = a;
//		int* right = a + sz - 1;
//
//		while (left < right)
//		{
//			temp = *left;
//			*left = *right;
//			*right = temp;
//			left++;
//			right--;
//		}
//	}
//};



#include <iostream>
using namespace std;
template <class T>
void f(T a[], int n)
{
	int i = 0;
	for (int j = 0; i < n / 2; i++)
	{
		T t;
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}

	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
		cout << endl;
	}
}
int main()
{
	int a[6] = { 1,2,3,4,5,6 };
	double b[3] = { 1.2,3.4,5.6 };

	f(a, 6); 
	f(b, 3);

	return 0;
}