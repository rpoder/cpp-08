/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronanpoder <ronanpoder@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:56:37 by ronanpoder        #+#    #+#             */
/*   Updated: 2023/04/01 18:08:17 by ronanpoder       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();

		Span	&operator=(const Span &copy);

		unsigned int	getSize() const;
		void			addNumber();

	private:
		Span();
		unsigned int		_size;
		std::vector<int>	_tab;
};

#endif
