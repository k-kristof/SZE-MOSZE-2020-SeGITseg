#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>

class Unit
{
private:
	const std::string name;
	int hp;
	int dmg;
	friend std::ostream & operator<<(std::ostream &o, const Unit* u);

public:
	Unit(std::string name, int hp, int dmg);
	std::string getName() const;
	int getHp() const;
	int getDmg() const;
	void setHp(int new_hp);
	void attack(Unit* other);
};


#endif

