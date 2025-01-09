#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include <map>

class ASpell;

class SpellBook
{
    private:
        SpellBook &operator=(const SpellBook &src);
        SpellBook(const SpellBook &src);
        std::map<std::string, ASpell *> _SpellBook;
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);
};
