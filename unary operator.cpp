#include<iostream>
using namespace std;
class count{
private:
	int n;
public:
	count()
	{
	n=0;
	}
void show()
{
	cout<<n;
}
void operator ++()
{
	n=n+1;
}
void operator ++(int)
{
	n=n+1;
}
};
int main()
{
	count c;
	c++;
	++c;
	c.show();
	return 0;
}
