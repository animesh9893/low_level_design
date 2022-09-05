#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"


using namespace std;

class Duck{
public:
	FlyBehavior *flyObj;
	QuackBehavior *quackObj;

	Duck(){
		flyObj = NULL;quackObj = NULL;
	}

	void display(){
		if(flyObj!=NULL){
			flyObj->fly();
		}
		if(quackObj!=NULL){
			quackObj->quack();
		}
	}
};

class Indian:public Duck{
public:
	Indian(){
		// indian duck is able to all things
		flyObj = new FastFly();
		quackObj = new Mute();
		display();
	}
};

class American:public Duck{
public:
	American(){
		// indian duck is able to all things
		flyObj = new Fly();
		quackObj = new Huack();
		display();
	}
};


class Chinese:public Duck{
public:
	Chinese(){
		// indian duck is able to all things
		flyObj = new NoFly();
		quackObj = new Mute();
		display();
	}
};