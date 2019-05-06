#include <iostream>
using namespace std;

template<typename x>

class pair
{
private:
	x values[2];
public:
	pair(x temp1,x temp2)
	{
		values[0]=temp1;
		values[1]=temp2;
	}
	x GetMax(x a,x b)
	{
		if(a>b)
		{
			return a;
		}
		else return b;
	}
	x GetMin();
	friend ostream& operator<<(ostream& xyz,pair dummy)
	{
		xyz<<dummy.GetMax()<<endl;
		xyz<<dummy.GetMin()<<endl;
	}

};

template<typename x>
	x pair<x>:: GetMin()
	{
		if(a<b)
		{
			return a;
		}
		else return b;
	}