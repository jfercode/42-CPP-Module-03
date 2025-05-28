/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:25:55 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/28 14:39:29 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  private:
	/* data */
  public:
	FragTrap(/* args */);
	FragTrap(const std::string& _name);
    ~FragTrap();

    void    highFivesGuys(void);
};
