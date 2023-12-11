#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& other);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap &rhs);

        void    attack(const std::string& target);

        void    guardGate();
};

#endif