#include <iostream>
#include "unit.h"

Unit::Unit(const std::string name, const int hp, const int dmg)
	: name(name), hp(hp), dmg(dmg) {}

std::string Unit::getName() const
{
	return name;
}

int Unit::getHp() const
{
	return hp;
}

int Unit::getDmg() const
{
	return dmg;
}

void Unit::fight(Unit &other)
{
	while (hp > 0)
	{
		std::cout << name << " -> " << other.getName() << std::endl;
		(other.getHp() - dmg > 0) ? other.hp -= dmg : other.hp = 0;
		std::cout << *this << other;

		if (other.getHp() == 0)
		{
			break;
		}

		std::cout << other.getName() << " -> " << name << std::endl;
		(hp - other.getDmg() > 0) ? hp -= other.dmg : hp = 0;
		std::cout << *this << other;
	}

	if (other.getHp() == 0)
	{
		std::cout << other.getName() << " died. " << name << " wins.\n";
	}
	else
	{
		std::cout << name << " died. " << other.getName() << " wins.\n";
	}
}

std::ostream &operator<<(std::ostream &out, const Unit &u)
{
	return out << u.getName() << ": HP: " << u.getHp() << ", DMG: " << u.getDmg() << "\n";
}