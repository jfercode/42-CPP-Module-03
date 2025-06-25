/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:17:52 by jaferna2          #+#    #+#             */
/*   Updated: 2025/06/25 11:02:01 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
  private:
	std::string _Name;
	int _HitPoints;
	int _EnergyPoints;
	int _AttackDamage;

  public:
	ClapTrap(/* args */);
	ClapTrap(const std::string _name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap &copy);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
