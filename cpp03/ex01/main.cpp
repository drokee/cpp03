#include"ScavTrap.hpp"

int main()
{
    ScavTrap clap("ENEMY");
    clap.attack("OUSSSAMA");
    clap.takeDamage(5);
    clap.beRepaired(5);
    clap.guardGate();
}