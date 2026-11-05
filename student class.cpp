#include<iostream>
using namespace std;
class Student{
private:
	int a;
	int b;
public:
	Student(int x,int y)
	{
		a=15;
		b=20;
	}
	void show(){
	cout<<a;
	cout<<b;
	}
};
int main (){
	Student s;
	s.show();
	return 0;
}
