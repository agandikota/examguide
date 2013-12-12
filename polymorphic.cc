#include <iostream>

using namespace std;

struct B{
	int i;
	B(int i=0):i(i){};
	
};

struct D : public B{
	int j;
	D(int i=0,int j=0):B(i),j(j){};
	
};


void f(B **b){
	delete b[0];
	b[0] = new B(6);
	delete b[1];
	b[1] =  new B(7);
	cout<<"f was called"<<endl;
	
}

int main(){
	D* arr[2];
	arr[0] = new D(1,2);
	arr[1] = new D(3,4);
	
	f(arr);
	for (int i = 0; i < 2;i++){
		cout << arr[i]->i << " and " << arr[i]->j << endl;
	}
	for (int i = 0; i < 2;i++){
		delete arr[i];
	}
}


