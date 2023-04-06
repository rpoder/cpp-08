/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpoder <rpoder@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:56:37 by ronanpoder        #+#    #+#             */
/*   Updated: 2023/04/06 17:21:36 by rpoder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();

		Span			&operator=(const Span &copy);

		unsigned int	getSize() const;
		void			addNumber(int number);
		int				longestSpan();
		int				shortestSpan();

	private:
		Span();
		unsigned int		_size;
		std::vector<int>	_tab;

		class VectorIsFullException:
			public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class WrongConstructorParametersException:
			public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class CannotCallFunctionException:
			public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

#endif
