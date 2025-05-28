/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:30:26 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/28 16:03:30 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int	main(void)
{
	ClapTrap roland = ClapTrap("Roland");
	ScavTrap jack = ScavTrap("Jack");
	FragTrap lilith = FragTrap("Lilith");

	jack.attack("Roland");
    roland.takeDamage(jack.getAttackDamage());
	jack.guardGate();
	
	lilith.attack("Roland");
	roland.takeDamage(lilith.getAttackDamage());
    lilith.highFivesGuys();

	return (0);
}