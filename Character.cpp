#include "Character.hpp"

using namespace std;

Character::Character()
{
}

Character::Character(int h, int mH, std::string n, std::string j) : healthy(h), maxHealthy(mH), name(n), job(j)
{
}

int Character::getHealthy() const
{
      return healthy;
}

int Character::getMaxHealthy() const
{
      return maxHealthy;
}

string Character::getName() const
{
      return name;
}

string Character::getJob() const
{
      return job;
}

void Character::infos() const
{
      cout << "Informations sur le personnage: \n";
      cout << "\tNom du Personnage: " << getName() << endl;
      cout << "\tPoints de vie maximum du personnage: " << getMaxHealthy() << endl;
      cout << "\tPoints de vie du personnage: " << getHealthy() << endl;
      cout << "\tMétier du personnage: " << getJob() << endl;
}

Character::~Character()
{
}