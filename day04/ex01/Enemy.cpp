#include "Enemy.hpp"

Enemy::Enemy() : type(std::string()), hp(0)
{
}

Enemy::Enemy(int hp, std::string const &type) : type(type), hp(hp)
{
}

Enemy::Enemy(Enemy const &other) : type(other.type), hp(other.hp)
{
}

Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(Enemy const &other)
{
    this->type = other.type;
    this->hp = other.hp;
    return (*this);
}

std::string const &Enemy::getType(void) const
{
    return (this->type);
}

int Enemy::getHP(void) const
{
    return (this->hp);
}

void Enemy::takeDamage(int damage)
{
    if (damage < 0)
        return;
    this->hp -= damage;
    if (this->hp < 0)
        this->hp = 0;
}
