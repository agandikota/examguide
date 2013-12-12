//include include guards

const int maxObservers = 5;

class Subject{
	int numObservers;
	Observer* observers[maxObservers];
protected:
	Subject();
public:
	virtual ~Subject = 0; //Pure virtual destructor
	virtual void attach (Observer*);
	virtual void detach (Observer*);
	virtual void notify();
};

class Observer{
public:
	virtual ~Observer();
	virtual void update() = 0;
protected:
	Observer();
};


