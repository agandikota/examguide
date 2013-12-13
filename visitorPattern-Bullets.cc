#include <iostream>

using namespace std;

class Enemy;
class Turtle;
class Bullet;

class Weapon{
public:
	virtual void strike(Turtle *t) = 0;
	virtual void strike(Bullet *b) = 0; 
};

class Rock : public Weapon{
public:
	void strike(Turtle *t){
		cout << "turtle been attacked by a rock" << endl;
	}

	void strike(Bullet *b){
		cout << "bullet been attacked by a rock" << endl;
	}
};

class Stick : public Weapon{
public:
	void strike(Turtle *t){
		cout << "turtle been attacked by a stick" << endl;
	}

	void strike(Bullet *b){
		cout << "bullet been attacked by a stick" << endl;
	}
};

class Enemy{
public:
	virtual void letsDo(Weapon* w) = 0;
};

class Turtle: public Enemy{
public:
	void letsDo(Weapon* w){
		w->strike(this);
	}
};

class Bullet: public Enemy{
public:
	void letsDo(Weapon* w){
		w->strike(this);
	}
};

int main(void){
	Bullet tt;
	Stick r;
	tt.letsDo(&r);
}


