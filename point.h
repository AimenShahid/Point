#include<iostream>
using namespace std;
class point
{
public:
	//getters
	double getx()
	{
		return this->x;
	}
	double gety()
	{
		return this->y;
	}
	//setters
	void setx(double x)
	{
		this->x = x;
	}
	void sety(double y)
	{
		this->y = y;
	}
/*	void setnumb(double x, double y)
	{
		this->x = x;
		this->y = y;
	}*/
	//CONSTRUCTORS
	point()
	{
		this->x = 0;
		this->y = 0;

	}
	point(double x, double y)
	{
		this->x = x;
		this->y = y;

	}
	point(point& clonePOINT)
	{
		this->x = clonePOINT.x;
		this->y = clonePOINT.y;

	}
	point(float a)
	{

	}
	void display()
	{
		cout << "(" << this->x << "," << this->y << ")" << endl;
	}
	point operator +(point& A)
	{
		//return (this->x + b.x, this->y + b.y);
    point a;
	    a.x = this->x + A.x;
	    a.y = this->y + A.y;
	    return a;
	}
  point operator -(point& A)
	{
		//return (this->x + b.x, this->y + b.y);
    point a;
	    a.x = this->x - A.x;
	    a.y = this->y - A.y;
	    return a;
	}
  point operator =(const point& A)
	{
		//return (this->x + b.x, this->y + b.y);
    point a;
	  this->x = A.x;
	  this->y = A.y;
	}
	bool operator >(point& A)
	{
		if( this->x > A.x &&  this->y > A.y)
	    {
	      return true;
	    }
	     else
	    {
	      return false;
	    }
	}
  bool operator <(point& A)
	{
		if( this->x < A.x &&  this->y < A.y)
	    {
	      return true;
	    }
	     else
	    {
	      return false;
	    }
	}
  point operator+ (float A)
	  {
	    point a;
	    a.x = this->x + A;
	    a.y = this->y + A;
	    return a;
	  }
	
/*	bool operator ()()
	{
		return true;
	}
	point operator [](float y)
	{
		return y = 5;
	}*/
private:
	double x;
	double y;
};
ostream& operator <<(ostream& o, point p)
{
	return o << "(" << p.getx() << "," << p.gety() << ")" << endl;
}