#include<iostream>

using namespace std;

class sum {
	public:
		int num1;
		int num2;

		int get(){
			return num1 + num2;
		}
};

int main()
{
	sum obj;
	obj.num1=5;
	obj.num2=15;
	
	cout << "sum = " << obj.get();
	return 0;
}
