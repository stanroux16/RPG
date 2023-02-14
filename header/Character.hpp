#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <iostream>
#include <string>
#include "../header/Weapon.hpp"

class Character {
private:
	int m_healthy;
	int m_maxHealthy;
	std::string m_name;
	Weapon *m_weapon;

public:
	Character();
	Character(int h, int mH, std::string n, Weapon *weapon);
	~Character();
	int getHealthy() const;
	int getMaxHealthy() const;
	std::string getName() const;
  Weapon getWeapon() const;
	void infos() const;
};
#endif