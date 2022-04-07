/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:00:28 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/07 13:29:36 by minsunki         ###   ########seoul.kr  */
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

	template <typename Iterator> class iterator_traits
	{
		public:
			typedef typename Iterator::iterator_category	iterator_category;
			typedef typename Iterator::value_type			value_type;
			typedef typename Iterator::difference_type		difference_type;
			typedef typename Iterator::pointer				pointer;
			typedef typename Iterator::reference			reference;
	};

	template <typename T> class iterator_traits<T*>
	{
		public:
			typedef random_access_iterator_tag				iterator_category;
			typedef T										value_type;
			typedef ptrdiff_t								difference_type;
			typedef T*										pointer;
			typedef T&										reference;
	};

	template <typename T> class iterator_traits<const T*>
	{
		public:
			typedef random_access_iterator_tag				iterator_category;
			typedef T										value_type;
			typedef ptrdiff_t								difference_type;
			typedef const T*								pointer;
			typedef const T&								reference;
	};


}

/* iterator implementation */
namespace ft
{
	template <typename Category, typename T, typename Distance = ptrdiff_t,
			typename Pointer = T*, typename Reference = T&>
	class iterator
	{
		public:
			typedef Category	iterator_category;
			typedef T			value_type;
			typedef Distance	difference_type;
			typedef Pointer		pointer;
			typedef Reference	reference;
	}; 
}

/* iterator functions implementation */
namespace ft
{
	template<class InputIterator>
	typename iterator_traits<InputIterator>::difference_type
		distance (InputIterator first, InputIterator last)
	{
		typename iterator_traits<InputIterator>::difference_type ret = 0;
		while (first != last)
		{
			first++;
			ret++;
		}
		return (ret);
	}
}

#endif