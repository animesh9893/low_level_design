#include <iostream>
#include "WeaponBehavior.h"

using namespace std;


class Character{
public:
	WeaponBehavior *weaponB=NULL;

	void display(){
		if(weaponB==NULL) return ;
		weaponB->useWeapon();
	}

};


class Queen: public Character{
public:
	Queen(){
		cout<<"Queen -> ";
		weaponB = new BowAndArrowBehavior();
		display();
	}
};


class King: public Character{
public:
	King(){
		cout<<"King -> ";
		weaponB = new KnifeBehavior();
		display();
	}
};


class Knight: public Character{
public:
	Knight(){
		cout<<"Knight -> ";
		weaponB = new AxeBehavior();
		display();
	}
};


class Troll: public Character{
public:
	Troll(){
		cout<<"King -> ";
		weaponB = new SwordBehavior();
		display();
	}
};

