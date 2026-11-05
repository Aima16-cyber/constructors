#include<iostream>
using namespace std;
class Sum{
private:
	int a;
	int b;
public:
	Sum(){
	a=2;
	b=3;
	}
void show(){
cout<<"Sum of two number:"<<a+b;
}
};
int main(){
	Sum s;
	s.show();
	return 0;
}
