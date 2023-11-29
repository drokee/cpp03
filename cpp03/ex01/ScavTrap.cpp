#include"ScavTrap.hpp"
ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "Default Constractor ScavTrap Called" << std::endl;
    Name = "defaultScavTrap";
    Hitpoints = 100;
    Energypoints = 50;
    Attackdamage = 20;
}
ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    std::cout << "Constractor ScavTrap Called" << std::endl;
    Name = n;
    Hitpoints = 100;
    Energypoints = 50;
    Attackdamage = 20;
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called! Destroying ScavTrap named " << Name << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " Now n Gatekeeper mode"<< std::endl; 
}