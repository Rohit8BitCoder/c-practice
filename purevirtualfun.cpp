#include <iostream>
#include <stdio.h>
using namespace std;



class Polygon 
{
protected:

  int width, height;

public:
  void setvalue(int a, int b) 
  {
    width = a;
    height = b;

    
  }
  virtual int area(void) = 0;
  
  
};

class Rectangle : public Polygon 
{
public:
  
  int area(void) 
  {
    return width * height;
  }
};


class Triangle : public Polygon 
{

public:
 
  int area(void)
     {
    return (width + height)/2;

    
    }

};


int main() 
{

   
    Triangle tri;
    Rectangle rect;


    Polygon *polyptr2 = &tri;

    polyptr2-> setvalue(2,8);
    cout<<polyptr2->area() <<endl;


    Polygon * polyptr3 = &rect;

     polyptr3-> setvalue(2,9);
      cout<<polyptr3->area() <<endl;
  
return 0;
  
}
