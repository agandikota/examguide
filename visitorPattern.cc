#include <iostream>

using namespace std;

class Animal;
class Dog;
class Cat;

class Operation{
public:
	virtual void dogFn(Dog *d) = 0;
	virtual void catFn(Cat *c) = 0;
};

class Sound : public Operation{
public:
	void dogFn(Dog *d){
		cout << "Woof" << endl;
	}
	void catFn(Cat *d){
		cout << "Meow" << endl;
	}
};


class Animal{
public:
	//virtual void makeSound = 0;
	virtual void letsDo(Operation *v) = 0;
};

class Dog:public Animal{
public:
	void letsDo(Operation *v){
		v->dogFn(this);
	}
};


class Cat:public Animal{
public:
	void letsDo(Operation *v){
		v->catFn(this);
	}
};


int main(void){
	Cat c;
	Sound s;
	c.letsDo(&s);
}











