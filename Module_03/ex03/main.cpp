# include "DiamondTrap.hpp"

int	main( void )
{
	std::cout << "-------------------------------- Default Constructors--------------------" << std::endl << std::endl;
	DiamondTrap	Mara;
	std::cout << Mara;							
	Mara.guardGate();
	Mara.highFivesGuys();
	Mara.whoAmI();
	Mara.attack("Zane");
	Mara.takeDamage(20);
	Mara.beRepaired(5);	
	std::cout << Mara;
	std::cout << "--------------------------------Parametric Constructor--------------------------" << std::endl << std::endl;
	DiamondTrap	Moze("Moze");					
	std::cout << Moze;
	std::cout << "----------------------------------Copy Constructor------------------------------" << std::endl << std::endl;
	DiamondTrap	Zane(Moze);						
	std::cout << Zane;
 	std::cout << "-----------------------------= Assignement operator------------------------------" << std::endl << std::endl;
	Mara = Zane;								 
	std::cout << Mara;
	std::cout << "-----------------------------Destructors------------------------------" << std::endl << std::endl;

}