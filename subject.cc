#include "subject.h"
#include <iostream>

using namespace std;

Subject::Subject():numObservers(0){};

Subject::~Subject(){};

void Subject::attach(Observer* o){
	if (numObservers < maxObservers){
		numObservers++;
		observers[numObservser-1] = o;
	}
}

void Subject::detach(Observer *o){
	for (int i = 0; i < maxObservers; i++){
		if (observers[i] == o){
			observers[i]  = NULL;
			numObservers--;
		}
	}
}

void Subject::notify(){
	for (int i = 0; i < maxObservers;i++){
		if (observers[i] != NULL) observers[i]->update();
	}
}

Observer::~Observer() == 0;




