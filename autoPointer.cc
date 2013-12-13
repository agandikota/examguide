#include <iostream>
#include <memory>

using namespace std;

class Basic{
	int x;
public:
	int getX() {return x;}
	Basic(int x):x(x){};
	
};


int main(void){
	auto_ptr<Basic> bp(new Basic(51));
	cout << bp->getX() << endl;

}




