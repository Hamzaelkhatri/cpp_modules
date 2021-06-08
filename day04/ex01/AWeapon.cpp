#include <iostream>
#include <string>

class AWeapon
{
protected:

public:
AWeapon(std::string const & name, int apcost, int damage);
 ~AWeapon();
std::string  getName() const;
int getAPCost() const;
int getDamage() const;
virtual  void attack() const = 0;
};