#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int         HitPoints;
        unsigned int         EnergyPoints;
        unsigned int         AttackDamage;

    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        unsigned int getAttackDamage();
        unsigned int getHitPoints();
        unsigned int getEnergyPoints();
};


#endif