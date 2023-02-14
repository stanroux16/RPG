#ifndef DEF_WEAPON
#define DEF_WEAPON

#include <iostream>
#include <string>

class Weapon {
private:
  std::string m_name;
  int m_dammage;
  int m_price;
  int m_maxUses;
  int m_uses;

public:
  Weapon();
  Weapon(std::string name, int dammage, int price, int maxUses, int uses);
  ~Weapon();
  std::string getName() const;
  int getDammage() const;
  int getPrice() const;
  int getMaxUses() const;
  int getUses() const;
  void setUses(int newUses);
  void infos() const;
};

#endif