#include <iostream>
#include "./header/Character.hpp"
#include "./header/Weapon.hpp"

using namespace std;

int main()
{
  Weapon *gun = new Weapon("Pistolet", 10, 25, 50, 0);
  Character *stan = new Character(100, 100, "Stan", gun);
  stan->infos();
  delete stan;
}