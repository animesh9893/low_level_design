#include <iostream>

using namespace std;

class QuackBehavior {
public:
	virtual void quack()=0;
};

class Quack: public QuackBehavior {
public:
	void quack(){
		cout<<"Quack class function called"<<endl;
	}
};

class Huack : public QuackBehavior{
public:
	void quack(){
		cout<<"Huack class function called"<<endl;
	}
};

class Mute : public QuackBehavior{
public:
	void quack(){
		cout<<"NoMute class function called"<<endl;
	}
};
