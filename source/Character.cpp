#include "../header/Character.hpp"

using namespace std;

Character::Character() {
}

Character::Character(int h, int mH, std::string n, Weapon *weapon)
	: m_healthy(h), m_maxHealthy(mH), m_name(n), m_weapon(weapon) {
}

int Character::getHealthy() const {
	return m_healthy;
}

int Character::getMaxHealthy() const {
	return m_maxHealthy;
}

string Character::getName() const {
	return m_name;
}

Weapon Character::getWeapon() const {
  return *m_weapon;
}

void Character::infos() const {
	cout << "Informations sur le personnage: \n";
	cout << "\tNom du Personnage: " << getName() << endl;
	cout << "\tPoints de vie maximum du personnage: " << getMaxHealthy()
		 << endl;
	cout << "\tPoints de vie du personnage: " << getHealthy() << endl;
  m_weapon->infos();
}

Character::~Character() {
  cout << "Mort de " << getName() << endl;
  delete m_weapon;
}