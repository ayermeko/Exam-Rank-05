#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell &src) {*this = src;}

ASpell &ASpell::operator=(const ASpell &src)
{
    if (this == &src)
        return (*this);
    this->_name = src.getName();
    this->_effects = src.getEffects();
    return (*this);
}

ASpell::~ASpell() {}

std::string ASpell::getName(void) const
{
    return (_name);
}

std::string ASpell::getEffects(void) const
{
    return (_effects);
}

void ASpell::launch(const ATarget &obj) const
{
    obj.getHitBySpell(*this);
}