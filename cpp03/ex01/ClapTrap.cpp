/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:23:02 by amahdiou          #+#    #+#             */
/*   Updated: 2023/11/29 19:52:02 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Name = "default";
    Hitpoints = 10;
    Energypoints = 10;
    Attackdamage = 0;
}
ClapTrap::ClapTrap(std::string n)
{
    Name = n;
    Hitpoints = 10;
    Energypoints = 10;
    Attackdamage = 0;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called! Destroying ClapTrap named " << Name << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (Hitpoints > 0 && Energypoints > 0)
    {
            std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attackdamage << " points of damage!" << std::endl;
            Energypoints--;
    } 
    else 
    {
            std::cout << "ClapTrap " << Name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
        if((int)amount > Hitpoints)
                Hitpoints = 0;
       if (Hitpoints > 0) 
       {
                Hitpoints -= amount;
                std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
        } 
        else 
        {
            std::cout << "ClapTrap " << Name << " can't take damage. It's already defeated." << std::endl;
        }
}
void ClapTrap::beRepaired(unsigned int amount)
{
       if (Hitpoints > 0 && Energypoints > 0) {
            Hitpoints += amount;
            std::cout << "ClapTrap " << Name << " is repaired for " << amount << " hit points!" << std::endl;
            Energypoints--;
        } else {
        std::cout << "ClapTrap " << Name << " can't be repaired. Not enough hit points or energy points." << std::endl;   
        }
}
