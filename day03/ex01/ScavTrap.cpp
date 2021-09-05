#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    ClapTrap::set_Attack_damage(20);
    ClapTrap::set_Energy_points(50);
    ClapTrap::set_Hit_points(100);
	std::cout << "Default constructor from ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destructor from ScavTrap called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << get_Name() << " from ScavTrap Attack " << target << " causing "<< get_Attack_damage() << "  points of damage! "<< std::endl;	
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode " << std::endl;
}