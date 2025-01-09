#pragma once

#include <string>
#include <iostream>

class Warlock
{
    private:
        std::string _name;
        std::string _title;

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
};
