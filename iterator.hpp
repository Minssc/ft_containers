/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:00:28 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/06 19:36:59 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITERATOR_HPP__
#define __ITERATOR_HPP__

#include "util.hpp"

// namespace ft
// {
// 	template <bool is_valid, typename T>
// 	struct valid_iterator_tag_res
// 	{
// 		typedef T type; 
// 		const static bool value = is_valid;
// 	};

// }

/* iterator types implementation */
namespace ft
{
	struct input_iterator_tag {};
	struct output_iterator_tag {};
	struct forward_iterator_tag: public input_iterator_tag {};
	struct bidirectional_iterator_tag: public forward_iterator_tag {};
	struct random_access_iterator_tag: public bidirectional_iterator_tag {};

	template <typename Iterator> struct iterator_traits
	{
		typedef typename Iterator::iterator_category	iterator_category;
		typedef typename Iterator::value_type			value_type;
		typedef typename Iterator::difference_type		difference_type;
		typedef typename Iterator::pointer				pointer;
		typedef typename Iterator::reference			reference;
	};

	template <typename _Tp> struct iterator_traits<_Tp*>
	{
		typedef random_access_iterator_tag				iterator_category;
		typedef _Tp										value_type;
		typedef ptrdiff_t								difference_type;
		typedef _Tp*									pointer;
		typedef _Tp&									reference;
	};

	template <typename _Tp> struct iterator_traits<const _Tp*>
	{
		typedef ft::random_access_iterator_tag			iterator_category;
		typedef _Tp										value_type;
		typedef ptrdiff_t								difference_type;
		typedef const _Tp*								pointer;
		typedef const _Tp&								reference;
	};


}

/* iterator implementation */
namespace ft
{
	template <typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
			typename _Pointer = _Tp*, typename _Reference = _Tp&>
	class iterator
	{
		public:
			typedef _Category	iterator_category;
			typedef _Tp			value_type;
			typedef _Distance	difference_type;
			typedef _Pointer	pointer;
			typedef _Reference	reference;
	}; 
}

/* iterator functions implementation */
namespace ft
{
	template<class InputIterator>
	typename ft::iterator_traits<InputIterator>::difference_type
		distance (InputIterator first, InputIterator last)
	{
		typename ft::iterator_traits<InputIterator>::difference_type ret = 0;
		while (first != last)
		{
			first++;
			ret++;
		}
		return (ret);
	}
}

#endif