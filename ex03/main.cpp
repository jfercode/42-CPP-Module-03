/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:30:26 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 16:00:49 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"
#include "include/DiamondTrap.hpp"

int	main(void)
{
	ClapTrap roland = ClapTrap("Roland");
	ScavTrap jack = ScavTrap("Jack");
	FragTrap lilith = FragTrap("Lilith");
	DiamondTrap krieg =  DiamondTrap("Krieg");

	std::cout << "\nClaptrap HP " << roland.getHitPoints() << " EP " << roland.getEnergyPoints() << " AD " << roland.getAttackDamage() << std::endl;
	std::cout << std::endl;
	std::cout << "ScavTrap HP " << jack.getHitPoints() << " EP " << jack.getEnergyPoints() << " AD " << jack.getAttackDamage() << std::endl;
	std::cout << std::endl;
	std::cout << "Fragtrap HP " << lilith.getHitPoints() << " EP " << lilith.getEnergyPoints() << " AD " << lilith.getAttackDamage() << std::endl;
	std::cout << std::endl;
	std::cout << "Diamond HP " << krieg.getHitPoints() << " EP " << krieg.getEnergyPoints() << " AD " << krieg.getAttackDamage() << std::endl;
	std::cout << std::endl;

	jack.attack("Roland");
    roland.takeDamage(jack.getAttackDamage());
	jack.guardGate();
    
	lilith.attack("Roland");
	roland.takeDamage(lilith.getAttackDamage());
    lilith.highFivesGuys();
	
	krieg.attack("Roland");
	roland.takeDamage(krieg.getAttackDamage());
    krieg.whoAmI();
	return (0);
}