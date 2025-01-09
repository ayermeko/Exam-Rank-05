#include "SpellBook.hpp"

SpellBook &SpellBook::operator=(const SpellBook &src)
{
    (void)src;
    return (*this);
}

SpellBook::SpellBook(const SpellBook &src)
{
    *this = src;
}

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
    {
        _SpellBook[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    if (_SpellBook.find(spellName) != _SpellBook.end())
    {
        _SpellBook.erase(_SpellBook.find(spellName));
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    ASpell* tmp = NULL;
    if (_SpellBook.find(spellName) != _SpellBook.end())
    {
        tmp = _SpellBook[spellName];
    }
    return (tmp);
}