#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <iostream>
#include <string>

class Character {
private:
	int healthy;
	int maxHealthy;
	std::string name;
	// Weapon weapon;
	std::string job;
	// Team team;

public:
	Character();
	Character(int h, int mH, std::string n, std::string j);
	~Character();
	int getHealthy() const;
	int getMaxHealthy() const;
	std::string getName() const;
	std::string getJob() const;
	void infos() const;
};
#endif