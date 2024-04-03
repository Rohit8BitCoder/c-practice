#include <iostream>
using namespace std;

class Demo 
{
public:
	Demo ();
	void display();
	~Demo()
{
	cout <<"\n bye-bye";
}

};

Demo::Demo ()
{
	cout<<"\n i am default constructor"; 
}

void Demo :: display(){
	cout <<"\n i am a display function";
}

int main (){
	Demo d,d1,d2;
	d1.display();
}
