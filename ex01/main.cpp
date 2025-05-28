/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:30:26 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/28 16:03:48 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"

int	main(void)
{
	ClapTrap roland = ClapTrap("Roland");
	ScavTrap jack = ScavTrap("Jack");

	jack.attack("Roland");
	roland.takeDamage(jack.getAttackDamage());
	roland.beRepaired(10);
	jack.guardGate();
	return (0);
}