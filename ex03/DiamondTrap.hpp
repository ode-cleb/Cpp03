#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP


# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& DiamondTrap);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap &rhs);

        using FragTrap::attack;
        void whoAmi();

    private:
        std::string name;
};

#endif