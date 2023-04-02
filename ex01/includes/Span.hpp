/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronanpoder <ronanpoder@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:56:37 by ronanpoder        #+#    #+#             */
/*   Updated: 2023/04/02 18:17:52 by ronanpoder       ###   ########.fr       */
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
			std::exception
		{
			public:
				const char	*what() const throw();
		};
		class WrongConstructorParametersException:
			std::exception
		{
			public:
				const char	*what() const throw();
		};
		class CannotCallFunctionException:
			std::exception
		{
			public:
				const char	*what() const throw();
		};
};

#endif
