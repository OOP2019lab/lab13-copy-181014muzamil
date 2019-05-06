#include<iostream>
using namespace std;

template <typename T> 


class Pair
{
	T values[2];
public:  

	Pair(T a,T b)
	{
	   values[0]=a;
	   values[1]=b;
	}

	T GetMax()
	{
	  if(values[0]>values[1])
		  return values[0];
	  else
		  return values[1];
	}

	T GetMin()
	{
	  if(values[0]<values[1])
		  return values[0];
	  else
		  return values[1];
	}

	friend ostream & operator<<(ostream & os,const Pair & p)
	{
	 os<<p.values[0]<<"  "<<p.values[1]<<endl;
	 return os;
	}
};
