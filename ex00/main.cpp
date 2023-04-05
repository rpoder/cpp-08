/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpoder <rpoder@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:28:40 by rpoder            #+#    #+#             */
/*   Updated: 2023/04/05 17:35:47 by rpoder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int>	my_vector;

	my_vector.push_back(11);
	my_vector.push_back(22);
	my_vector.push_back(33);

	try {
		std::cout << *eastfind(my_vector, 2) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "ERR:	not found." << std::endl;
	}
	return (0);
}
