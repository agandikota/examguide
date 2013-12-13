#include <iostream>
using namespace std;

class C{
	int x,y;
public:
	int getX() const {return x;}
	C(int x, int y):x(x),y(y){};
};

class Rogue{
	public:
	int x;
	int y;
};


int main(void){
	C sample(10,20);
	
	
	Rogue* evil = reinterpret_cast<Rogue*>(&sample);
	
	evil->x = 666;
	evil->y = 655;
	
	cout << sample.getX() << endl;
}


