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
//	//动态申请int和5个int数组
//	int* p1 = new int ;
//	int* p2 = new int(6);	//	动态申请一个int空间,这块空间初始化为5
//	int* p2 = new int[6];	//	动态申请5个int空间
//
//	delete p1;			//	释放单个空间
//	delete[] p2;		//	释放多个空间
//
//	return 0;
//}


//请声明Student类，类中包含数据成员姓名和分数，成员函数compare(用于比较两名学生的分数)。
//在主函数中输入n名学生的信息后，输出其中最高分和最低分学生的姓名及分数。

//#include<iostream>
//using namespace std;
////	学生的名字和分数
//class Student
//{
//	//类的数据成员
//	char name[20];	//	名字
//	int score,num;	//	分数
//
//	//	分数/比较大小
//public:
//	void compare(char* x,int j,char* y, int i)	
//	{
//		if (j > i)	//	最大值在 j
//		{
//			cout << "学生姓名：" << x << "分数为：" << j << endl;
//			cout << "学生姓名：" << y << "分数为: " << i << endl;
//		}
//		else if(j == i) 
//		{
//			cout << x << "和" << y << "分数相等" << ",均为: " << j << endl;
//		}
//		else	//	最大值在 i
//		{
//			cout << "学生姓名：" << y << ",分数为：" << i << endl;
//			cout << "学生姓名：" << x << ",分数为: " << j << endl;
//		}
//	}
//};
////	主函数中输入,调用分数函数输出
//int main()
//{
//	Student A;
//	int j = 0, i = 0;
//	char x[20], y[20];
//	cout << "请输入学生姓名：";cin >> x;
//	cout << "请输入学生成绩: ";cin >> j;
//	cout << endl;
//
//	cout << "请输入学生姓名：";cin >> y;
//	cout << "请输入学生成绩: ";cin >> i;
//	cout << endl;
//
//	A.compare(x, j, y, i);
//
//	return 0;
//}

//46.试编写可以实现不同数据类型数组逆置的函数，如{ 1，2，3 }变为
//{ 3，2，1 }，并在函数中输出逆置后的数组元素，主函数代码如下。

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