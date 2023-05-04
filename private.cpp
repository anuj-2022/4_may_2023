#include<iostream>

using namespace std;

class sum//creating class
{
	private://we can not access the private class variable out side the class
		int num1;
		int num2;

	public:
		void set(int x,int y)
		{
			num1=x;
			num2=y;
		}
		int get()
		{
			return num1 + num2;
		}
};

int main()
{
	sum obj;//creating object
	obj.set(37,5);

	cout << "sum = " << obj.get();
	return 0;
}
