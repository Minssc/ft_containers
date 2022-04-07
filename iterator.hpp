/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:00:28 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/07 16:33:16 by minsunki         ###   ########seoul.kr  */
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

	template <class Iterator> class iterator_traits
	{
		public:
			typedef typename Iterator::iterator_category	iterator_category;
			typedef typename Iterator::value_type			value_type;
			typedef typename Iterator::difference_type		difference_type;
			typedef typename Iterator::pointer				pointer;
			typedef typename Iterator::reference			reference;
	};

	template <class T> class iterator_traits<T*>
	{
		public:
			typedef random_access_iterator_tag				iterator_category;
			typedef T										value_type;
			typedef ptrdiff_t								difference_type;
			typedef T*										pointer;
			typedef T&										reference;
	};

	template <class T> class iterator_traits<const T*>
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
	template <class Category, class T, class Distance = ptrdiff_t,
			class Pointer = T*, class Reference = T&>
	class iterator
	{
		public:
			typedef Category	iterator_category;
			typedef T			value_type;
			typedef Distance	difference_type;
			typedef Pointer		pointer;
			typedef Reference	reference;
	}; 

	template <class Container>
	class back_insert_iterator: public iterator<output_iterator_tag,
													void, void, void, void>
	{
		protected:
			Container	*container;

		public:
			explicit	back_insert_iterator (Container& x);
			back_insert_iterator<Container>&	
						operator= (typename Container::const_reference value);
			back_insert_iterator<Container>&	operator* ();
			back_insert_iterator<Container>&	operator++ ();
			back_insert_iterator<Container>&	operator++ (int);
	};

	template <class Container>
	class front_insert_iterator: public iterator<output_iterator_tag,
													void, void, void, void>
	{
		protected:
			Container	*container;
		
		public:
			explicit	front_insert_iterator (Container& x);
			front_insert_iterator<Container>&	
						operator= (typename Container::const_reference value);
			front_insert_iterator<Container>&	operator* ();
			front_insert_iterator<Container>&	operator++ ();
			front_insert_iterator<Container>&	operator++ (int);
	};

	template <class Container>
	class insert_iterator: public iterator<output_iterator_tag,
													void, void, void, void>
	{
		protected:
			Container *container;
			typename Container::iterator	iter;

		public:
			explicit	insert_iterator
							(Container& x, typename Container::iterator i);
			insert_iterator<Container>&	operator= 
								(typename Container::const_reference value);
			insert_iterator<Container>&	operator* ();
			insert_iterator<Container>&	operator++ ();
			insert_iterator<Container>& operator++ (int);
	};
	
	// skip isstreambuf, istream, ostream, ostreambuf iterator?
	// template <class Container>
	// class 

	template <class Container>
	class reverse_iterator: public iterator<random_access_iterator_tag,
													void, void, void, void>
	{
		protected:
			typename Container::iterator iter;
			typedef iterator_traits<typename Container::iterator>	
																traits_type;

		public:
			typedef typename Container::iterator			iterator_type;
			typedef typename traits_type::difference_type	difference_type;
			typedef typename traits_type::pointer			pointer;
			typedef typename traits_type::reference			reference;

			reverse_iterator();
			explicit	reverse_iterator (iterator_type it);
			template <class Iter>
			reverse_iterator (const reverse_iterator<Iter>& rev_it);
			
			reverse_iterator&	operator= (const reverse_iterator& )
	};

}

/* iterator misc function declaration */ // 굳이 나누어야 하나 회의감이 든다.
namespace ft
{
	template <class InputIterator>
	typename iterator_traits<InputIterator>::difference_type distance
									(InputIterator first, InputIterator last);
};

/* iterator misc functions implementation */
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

/* template class implementation */ // put these in tpp later
namespace ft
{
	/* back_insert_iterator class */
	template <class C>
	back_insert_iterator<C>::back_insert_iterator(C& x): container(&x) {}
	
	template <class C>
	back_insert_iterator<C>&	back_insert_iterator<C>::operator=
										(typename C::const_reference value)
	{
		this->container.push_back(value);
		return (*this);
	}

	template <class C>
	back_insert_iterator<C>&	back_insert_iterator<C>::operator* ()
	{
		return (*this);
	}

	template <class C>
	back_insert_iterator<C>&	back_insert_iterator<C>::operator++ ()
	{
		return (*this);
	}

	template <class C>
	back_insert_iterator<C>&	back_insert_iterator<C>::operator++ (int)
	{
		return (*this);
	}

	/* front_insert_iterator class */
	template <class C>
	front_insert_iterator<C>::front_insert_iterator(C& x): container(&x) {}

	template <class C>
	front_insert_iterator<C>&	front_insert_iterator<C>::operator=
										(typename C::const_reference value)
	{
		this->container.push_back(value);
		return (*this);
	}

	template <class C>
	front_insert_iterator<C>&	front_insert_iterator<C>::operator* ()
	{
		return (*this);
	}

	template <class C>
	front_insert_iterator<C>&	front_insert_iterator<C>::operator++ ()
	{
		return (*this);
	}

	template <class C>
	front_insert_iterator<C>&	front_insert_iterator<C>::operator++ (int)
	{
		return (*this);
	}

	/* insert_iterator class */
	template <class C>
	insert_iterator<C>::insert_iterator(C& x, typename C::iterator i)
		: container(&x), iter(i) {}

	template <class C>
	insert_iterator<C>&	insert_iterator<C>::operator= 
										(typename C::const_reference value)
	{
		iter = container->insert(iter, value);
		++iter;
		return (*this);
	}

	template <class C>
	insert_iterator<C>&	insert_iterator<C>::operator* ()
	{
		return (*this);
	}

	template <class C>
	insert_iterator<C>&	insert_iterator<C>::operator++ ()
	{
		return (*this);
	}

	template <class C>
	insert_iterator<C>&	insert_iterator<C>::operator++ (int)
	{
		return (*this);
	}




	// back
}

#endif