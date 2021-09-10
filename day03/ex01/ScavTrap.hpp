#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : private ClapTrap
{
    private:
    public:
        ScavTrap(std::string str);
        ~ScavTrap();
        ScavTrap();
        ScavTrap(ScavTrap const &scavtrap);
        ScavTrap& operator=(ScavTrap const &scavtrap);
	    void attack(std::string const & target);
        void guardGate();

};

#endif