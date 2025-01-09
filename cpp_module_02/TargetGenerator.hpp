#pragma once

#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator
{
    private:
        TargetGenerator &operator=(const TargetGenerator &src);
        TargetGenerator(const TargetGenerator &src);
        std::map<std::string, ATarget *> _target;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
};