#include <iostream>

using namespace std;

class WeaponBehavior{
public:
	virtual void useWeapon()=0;
};

class BowAndArrowBehavior: public WeaponBehavior{
public:
	void useWeapon(){
		cout<<"BowAndArrow is used\n";
	}
};

class KnifeBehavior: public WeaponBehavior{
public:
	void useWeapon(){
		cout<<"Knife is used\n";
	}
};

class AxeBehavior: public WeaponBehavior{
public:
	void useWeapon(){
		cout<<"Axe is used\n";
	}
};


class SwordBehavior: public WeaponBehavior{
public:
	void useWeapon(){
		cout<<"Sword is used\n";
	}
};
