#include <iostream>
#include <stdio.h>


using namespace std;


class B;
class A {

int a,b;

public:
A (int m, int n)
{

        a=m;
        b=n;
}
  friend void add (A,B);
  
};



class B
{
  private:

int x,y;

public:
    B(int m, int n)
    {
    x=m;
    y=n;
    }
    friend void add (A,B);
};


void add (A obj1, B obj2)
{
  int m,n;
  m = obj1.a + obj2.x;
  n = obj1.b + obj2.y;
  
  cout << "\n Addition of first data member of both object:"<<m;
  
  cout << "\n addition if second data member of both object:"<<n;
  
}

void main ()
{
    A obj1(2,3);
    B obj2(10,10);
    add (obj1,obj2);
}
