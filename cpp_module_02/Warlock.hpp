#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class ASpell;

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        SpellBook _SpellBook;

        Warlock();
        Warlock(const Warlock &src);
        Warlock &operator=(const Warlock &src);
        
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();
        const std::string &getName(void) const;
        const std::string &getTitle(void) const;

        void setTitle(const std::string &title);
        void introduce() const;
        void learnSpell(ASpell *obj);
        void forgetSpell(std::string Spellname);
        void launchSpell(std::string Spellname, const ATarget &obj);
};
