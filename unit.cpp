#include <iostream>
#include "unit.h"

Unit::Unit(std::string name, int hp, int dmg)
  : name(name), hp(hp), dmg(dmg) {}

std::string Unit::getName() const {
	return name;
}

int Unit::getHp() const {
	return hp;
}

int Unit::getDmg() const {
	return dmg;
}

void Unit::setHp(const int newHp) {
	hp = newHp;
}

void Unit::attack(Unit* other)
{
	std::cout <<  name << " -> " << other->getName() << std::endl;
  int newHp = other->getHp() - dmg;
  (newHp > 0) ? other->setHp(newHp) : other->setHp(0);
}

std::ostream & operator<<(std::ostream &out, const Unit* u)
{
    return out << u->getName() << ": HP: " << u->getHp() << ", DMG: " << u->getDmg() << std::endl;
}

