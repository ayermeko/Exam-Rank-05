#pragma once

#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string _type;
    public:
        ATarget(std::string type);
        ATarget(const ATarget &src);
        ATarget &operator=(const ATarget &src);
        virtual ~ATarget();

        const std::string &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(const ASpell &obj) const;
};
