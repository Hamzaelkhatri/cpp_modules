#include "Character.hpp"

Character::Character(std::string const &name) : name(name), index(0)
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = nullptr;
}

Character::Character(Character const &other) : name(other.name), index(0)
{
    for (int i = 0; i < other.index; i++)
        this->equip(other.inventory[i]->clone());
}

Character::~Character()
{
    for (int i = 0; i < this->index; i++)
        delete this->inventory[i];
}

Character &Character::operator=(Character const &character)
{
    this->name = character.name;
    this->index = 0;
    for (int i = 0; i < character.index; i++)
        this->equip(character.inventory[i]->clone());
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    if (this->index == 4 || m == nullptr)
        return;
    this->inventory[this->index++] = m;
}

void Character::unequip(int i)
{
    if (i < 0 || i >= this->index || this->inventory[i] == nullptr)
        return;
    for (int i = i; i < 3; i++)
    {
        this->inventory[i] = this->inventory[i + 1];
        this->inventory[i + 1] = nullptr;
    }
    this->index--;
}

void Character::use(int i, ICharacter &target)
{
    if (i < 0 || i >= this->index || this->inventory[i] == nullptr)
        return;
    this->inventory[i]->use(target);
}
