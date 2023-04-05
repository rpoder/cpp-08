/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpoder <rpoder@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:19:23 by ronanpoder        #+#    #+#             */
/*   Updated: 2023/04/03 11:31:01 by rpoder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack:
	public std::stack<T>
{
	public:
		typename std::stack<T>::container_type::iterator	begin()
		{
			// typename std::stack<T>::container_type	tmp;

			return (this->c.begin());
		}
		typename std::stack<T>::container_type::iterator	end()
		{
			// typename std::stack<T>::container_type	tmp;

			return (this->c.end());
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
};

#endif
