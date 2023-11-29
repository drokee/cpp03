#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include<iostream>
class ClapTrap{
    protected:
        std::string  Name;
        int Hitpoints;
        int Energypoints;
        int Attackdamage;
    public:
    ClapTrap();
    ClapTrap(std::string n);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif
