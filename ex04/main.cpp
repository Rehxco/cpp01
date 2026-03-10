/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:27:21 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/10 19:49:14 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"


int	main(int ac, char **av)
{
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string str = av[1];
	std::string new_str = replace(s1, s2, str);
	std::cout << "str = " << str << std::endl;
	std::cout << "new_str = " << new_str << std::endl;
	
}