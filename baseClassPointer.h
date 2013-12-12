class B {
public:
   void m0();
   virtual void m1();
   virtual void m2();
};

class D : public B{
public:
   void m1();
   virtual void m3();
};
   
