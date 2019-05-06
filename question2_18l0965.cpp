// question2_18l0965.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

template<typename x>

class Pair
{
private:
	x values[2];
public:
	Pair(x temp1,x temp2)
	{
		values[0]=temp1;
		values[1]=temp2;
	}
	x GetMax()
	{
		if(values[0]>values[1])
		{
			return values[0];
		}
		else return values[1];
	}
	x GetMin();
	friend ostream& operator<<(ostream& xyz,Pair dummy)
	{
		xyz<<dummy.GetMax()<<endl;
		xyz<<dummy.GetMin()<<endl;
		return xyz;
	}

};

template<typename x>
	x Pair<x>:: GetMin()
	{
		if(values[0]<values[1])
		{
			return values[0];
		}
		else return values[1];
	}


int main()
{
	Pair <double> myobject (1.012, 1.01234);
	cout<<myobject.GetMax()<<endl;
	cout<<myobject.GetMin()<<endl;
	cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)

	return 0;
}

