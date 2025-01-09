#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {}

ATarget::ATarget(const ATarget &src) {*this = src;}

ATarget &ATarget::operator=(const ATarget &src) 
{
    (void)src; 
    return(*this);
}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const 
{
    return (_type);
}

void ATarget::getHitBySpell(const ASpell &obj) const
{
    std::cout << this->getType() << " has been " << obj.getEffects() << "!\n";
}