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
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& ClapTrap);
        ~ClapTrap();
        ClapTrap& operator=( const ClapTrap &rhs );
        
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        unsigned int getAttackDamage();
        unsigned int getHitPoints();
        unsigned int getEnergyPoints();
};


#endif