#include<iostream>
#include<conio.h>
using namespace std;
class Student{
	private:
	int a,b;
	public:
	Student()
	{
	a=0;
	b=0;
	}
~Student()
{
	cout<<"Object destroy";
}
void display(){
cout<<a;
cout<<b;
}
};
int main()
{
	Student s;
	s.display();
	return 0;
}

