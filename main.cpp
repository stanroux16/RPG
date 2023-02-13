#include <iostream>
#include "Character.hpp"

using namespace std;

int main()
{
  Character stan = Character(100, 100, "Stan", "Dev");
  stan.infos();
}