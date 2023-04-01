/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronanpoder <ronanpoder@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:28:40 by rpoder            #+#    #+#             */
/*   Updated: 2023/04/01 17:43:12 by ronanpoder       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int>	my_vector;

	my_vector.push_back(1);
	my_vector.push_back(2);
	my_vector.push_back(3);

	try {
		std::cout << *eastfind(my_vector, 5) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "ERR:	not found." << std::endl;
	}
	return (0);
}
