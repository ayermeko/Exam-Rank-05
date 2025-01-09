#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::Warlock(const Warlock &src) {*this = src;}

Warlock &Warlock::operator=(const Warlock &src)
{
    if (this == &src)
        return (*this);
    this->_name = src.getName();
    this->_title = src.getTitle();
    return (*this);    
}

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title) 
{
    std::cout << this->getName() << ": This looks like another boring day.\n";
}

const std::string &Warlock::getName(void) const
{
    return (_name);
}

const std::string &Warlock::getTitle(void) const
{
    return (_title);
}

void Warlock::setTitle(const std::string &title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!\n";
}

Warlock::~Warlock() 
{
    std::cout << this->getName() << ": My job here is done!\n";
}

void Warlock::learnSpell(ASpell *obj)
{
    _SpellBook.learnSpell(obj);
}

void Warlock::forgetSpell(std::string Spellname)
{
    _SpellBook.forgetSpell(Spellname);
}

void Warlock::launchSpell(std::string Spellname, const ATarget &obj)
{
    if (_SpellBook.createSpell(Spellname))
        _SpellBook.createSpell(Spellname)->launch(obj);
}