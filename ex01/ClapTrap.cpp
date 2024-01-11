#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "Constructor ClapTrap " << this->name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy Constructor ClapTrap called" << std::endl;
    *this=other;
}


void    ClapTrap::attack(const std::string& target)
{
    if (this->HitPoints == 0)
        std::cout << this->name << " is dead" << std::endl;
    else if (this->EnergyPoints == 0)
        std::cout << this->name << "had no energy" << std::endl;
    else
    {
        this->EnergyPoints--;
        std::cout << this->name << " attacked " << target << ", causing " << this->AttackDamage << " attack damage" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints != 0)
    {
        while (HitPoints != 0 && amount != 0)
        {
            amount--;
            this->HitPoints--;
        }
        if (this->HitPoints == 0)
            std::cout << this->name << " died." << std::endl;
    }
    else
        std::cout << this->name << " is dead" << std::endl;
}

 void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints == 0)
        std::cout << this->name << " is dead" << std::endl;
    else if (this->EnergyPoints == 0)
        std::cout << this->name << "had no energy" << std::endl;
    else
    {
        this->EnergyPoints--;
        std::cout << this->name << " repaired himself of " << amount << " PV " << std::endl;
        this->HitPoints += amount;
    }

}

unsigned int ClapTrap::getAttackDamage()
{
    return this->AttackDamage;
}

unsigned int ClapTrap::getEnergyPoints()
{
    return this->EnergyPoints;
}

unsigned int ClapTrap::getHitPoints()
{
    return this->HitPoints;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &rhs )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->AttackDamage = rhs.AttackDamage;
        this->EnergyPoints = rhs.EnergyPoints;
        this->HitPoints = rhs.HitPoints;
    }
    return *this;
}
