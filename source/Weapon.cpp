#include "../header/Weapon.hpp"

using namespace std;

Weapon::Weapon() {
}

Weapon::Weapon(string name, int dammage, int price, int maxUses, int uses)
	: m_name(name),
	  m_dammage(dammage),
	  m_price(price),
	  m_maxUses(maxUses),
	  m_uses(uses) {
}

string Weapon::getName() const {
	return m_name;
}

int Weapon::getDammage() const {
	return m_dammage;
}

int Weapon::getPrice() const {
	return m_price;
}

int Weapon::getMaxUses() const {
	return m_maxUses;
}

int Weapon::getUses() const {
	return m_uses;
}

void Weapon::setUses(int newUses) {
  m_uses = newUses;
}

void Weapon::infos() const {
	cout << "Information sur l'arme:\n";
  cout << "\tNom de l'arme: " << getName() << endl;
  cout << "\tDégats infliés par l'arme: " << getDammage() << endl;
  cout << "\tPrix de l'arme: " << getPrice() << endl;
  cout << "\tUsages maximum de l'arme: " << getMaxUses() << endl;
  cout << "\tUsages de l'arme: " << getUses() << endl;
}

Weapon::~Weapon() {
	cout << getName() << " HS\n";
}