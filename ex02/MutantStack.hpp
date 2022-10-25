/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:15:38 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/25 23:46:04 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <string>
# include <iostream>
# include <algorithm>
# include <iterator>
# include <ctime>
# include <cstdlib>
#include <vector>
#include <list>
#include <map>
#include <queue>

template <typename T>
class	MutantStack : public std::stack<T> {

	public :
		
		MutantStack(void) : std::stack<T>() { }
		MutantStack(MutantStack const &ref) : std::stack<T>(ref) { }
		MutantStack &operator=(MutantStack const &ref) {
			this->c = ref.c;
			return (*this); }
		virtual ~MutantStack(void) { }

		typedef typename	std::stack<T>::container_type::iterator							iterator;
		typedef typename	std::stack<T>::container_type::const_iterator					const_iterator;
		typedef typename	std::stack<T>::container_type::reverse_iterator					reverse_iterator;
		typedef typename	std::stack<T>::container_type::const_reverse_iterator			const_reverse_iterator;

		iterator			begin(void)					{ return (this->c.begin()); }
		iterator			end(void)					{ return (this->c.end()); }
		
		const_iterator		begin(void)	const			{ return (this->c.begin()); }
		const_iterator		end(void)	const			{ return (this->c.end()); }

		reverse_iterator	rbegin(void)				{ return (this->c.rbegin()); }
		reverse_iterator	rend(void)					{ return (this->c.rend()); }

		const_reverse_iterator	crbegin(void) 	const	{ return (this->c.rbegin()); }
		const_reverse_iterator	crend(void)		const	{ return (this->c.rend()); }

};

#endif
