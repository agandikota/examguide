#include "baseClassPointer.h"
#include <iostream>

using namespace std;

void B::m0(){
   cout << "This is B m0" << endl;
}

void B::m1(){
   cout << "This is B m1" << endl;
}


void B::m2(){
   cout << "This is B m2" << endl;
}

void D::m1(){
   cout << "This is D m1" << endl;
}


void D::m3(){
   cout << "This is D m3" << endl;
}


int main(void){
   D d;
   B* pb = &d;
   
   pb->m1();
   pb->m2();
   dynamic_cast<D*>(dynamic_cast<B*>(pb))->m3();
}
