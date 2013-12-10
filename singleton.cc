#include <iostream>

using namespace std;

Singleton* Singleton::instance = 0;

Singleton* Singleton::makeInstance(){
   
   if (!instance){
      instance = new Singleton;
   }
   return instance;
}

int Singleton::operation(int arg){
   this->data = arg;
}

int Singleton::getResult(){
   return this->data;
}

int main(void){
   Singleton* s = Singleton::makeInstance();
   s->operation(4);
   cout << s->getResult() << endl;
}

