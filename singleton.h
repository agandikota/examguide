//Include include guards

class Singleton{
private:
   static Singleton* _instance;
   int data;
public:
   static Singleton* makeInstance();
   int operation(int arg);
   int getResult();    
};


