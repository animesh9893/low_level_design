#include <iostream>

using namespace std;

class FlyBehavior {
public:
	virtual void fly()=0;
};

class FastFly: public FlyBehavior {
public:
	void fly(){
		cout<<"FastFly fly function called"<<endl;
	}
};

class Fly : public FlyBehavior{
public:
	void fly(){
		cout<<"Fly class fly function called"<<endl;
	}
};

class NoFly : public FlyBehavior{
public:
	void fly(){
		cout<<"NoFly class fly function called"<<endl;
	}
};