#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>

class Weapon {
private:
  std::string m_name;
  int m_dammage;
  int m_health;
  int m_price;
  int m_maxUses;
  int m_uses;

public:
  std::string getName() const;
  int getDammage() const;
  int getHealth() const;
  int getPrice() const;
  int getMaxUses() const;
  int getUses() const;
  void setHealth(int newHealth);
};

#endif