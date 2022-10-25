# include "ClapTrap.hpp"

int	main( void )
{
	std::cout << "-------------------------------- Default Constructors--------------------" << std::endl << std::endl;
	ClapTrap	Mara;
	std::cout << Mara;							
	Mara.attack("Zane");
	Mara.takeDamage(20);
	Mara.beRepaired(5);	
	std::cout << Mara;
	std::cout << "--------------------------------Parametric Constructor--------------------------" << std::endl << std::endl;
	ClapTrap	Moze("Moze");					
	std::cout << Moze;
	std::cout << "----------------------------------Copy Constructor------------------------------" << std::endl << std::endl;
	ClapTrap	Zane(Moze);						
	std::cout << Zane;
 	std::cout << "-----------------------------= Assignement operator------------------------------" << std::endl << std::endl;
	Mara = Zane;								 
	std::cout << Mara;
	std::cout << "-----------------------------Destructors------------------------------" << std::endl << std::endl;
}