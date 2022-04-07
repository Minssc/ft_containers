/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:32:21 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/07 13:25:41 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__

#include <memory>
#include <iostream>

namespace ft
{
	template <typename T, typename Alloc = std::allocator<T> >
	class vector
	{
		public:
			typedef T											value_type;
			typedef Alloc										allocator_type;
			typedef typename allocator_type::reference			reference;
			typedef typename allocator_type::const_reference	const_reference;
			typedef typename allocator_type::pointer			pointer;
			typedef typename allocator_type::const_pointer		const_pointer;
// TOOD:: iterator, const_iterator, reverse_iterator, const_reverse_iterator 
//			iterator_traits
			typedef typename allocator_type::size_type			size_type;

			explicit vector (const allocator_type& alloc = allocator_type());
			explicit vector (size_type n, const value_type& val = value_type(),
							const allocator_type& alloc = allocator_type());
			template <class InputIterator>
			vector (InputIterator first, InputIterator last,
					const allocator_type& alloc = allocator_type());
			vector (const vector& x);
			~vector();

			const vector	&operator =(const vector& x);

			// iterator				begin();
			// const_iterator			begin() const;
			// iterator				end();
			// const_iterator			end() const;
			// reverse_iterator		rbegin();
			// const_reverse_iterator	rbegin() const;
			// reverse_iterator		rend();
			// const_reverse_iterator	rend() const;

			size_type		size() const;
			size_type		max_size() const;
			void			resize (size_type n, value_type val = value_type());
			size_type		capacity() const;
			bool			empty() const;
			void			reserve (size_type n);

			reference		operator[] (size_type n);
			const_reference	operator[] (size_type n) const;
			reference		at (size_type n);
			const_reference	at (size_type n) const;
			reference		front();
			const_reference	front() const;
			reference		back();
			const_reference	back() const;
			
			template <class InputIterator>
			void			assign (InputIterator first, InputIterator last);
			void			assign (size_type n, const value_type& val);
			void			push_back (const value_type& val);
			void			pop_back();
			// iterator		insert (iterator position, const value_type& val);
			// void			insert (iterator position, size_type n,
			// 						const value_type& val);
			// template <class InputIterator>
			// void			insert (iterator position, InputIterator first,
			// 						InputIterator last);
			// iterator		erase (iterator position);
			// iterator		erase (iterator first, iterator last);
			void			swap (vector &x);
			void			clear();

			allocator_type	get_allocator() const;

			// template <class T, class Alloc>
			// friend bool 	operator== (const vector<T,Alloc>& lhs,
			// 							const vector<T,Alloc>& rhs);
			// template <class T, class Alloc>
			// friend bool		operator!= (const vector<T,Alloc>& lhs,
			// 							const vector<T,Alloc>& rhs);
			// template <class T, class Alloc>
			// friend bool		operator< (const vector<T,Alloc>& lhs,
			// 							const vector<T,Alloc>& rhs);
			// template <class T, class Alloc>
			// friend bool		operator<= (const vector<T,Alloc>& lhs,
			// 							const vector<T,Alloc>& rhs);
			// template <class T, class Alloc>
			// friend bool		operator> (const vector<T,Alloc>& lhs,
			// 							const vector<T,Alloc>& rhs);
			// template <class T, class Alloc>
			// friend bool		operator>= (const vector<T,Alloc>& lhs,
			// 							const vector<T,Alloc>& rhs);
			// template <class T, class Alloc>
			// friend void		swap(vector<T,Alloc>& x, vector<T,Alloc>& y);

		private:
			allocator_type	_alloc;
			// _T	*_c;
	};
}


namespace ft
{

/* CONSTRUCTORS */
template <typename _T, typename _A>
vector<_T,_A>::vector (const allocator_type& alloc)
	: _alloc(alloc) {}

template <typename _T, typename _A>
vector<_T,_A>::vector (size_type n,
						const value_type& val,
						const allocator_type& alloc)
{

}

template <typename _T, typename _A>
template <class InputIterator>
vector<_T,_A>::vector (InputIterator first, InputIterator last,
						const allocator_type& alloc)
{

}

template <typename _T, typename _A>
vector<_T,_A>::vector (const vector& x)
{

}


/* DESTRUCTOR */
template <typename _T, typename _A>
vector<_T,_A>::~vector() 
{

}


/* ASSIGNMENT OPERATOR */
template <typename _T, typename _A>
const vector<_T,_A>& vector<_T,_A>::operator =(const vector& x)
{
	
}

/* TODO Iterators */


/* CAPACITY */
template <typename _T, typename _A>
typename vector<_T,_A>::size_type	vector<_T,_A>::size()
const
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::size_type	
					vector<_T,_A>::max_size()
const
{

}

template <typename _T, typename _A>
void	vector<_T,_A>::resize (size_type n, value_type val)
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::size_type vector<_T,_A>::capacity () 
const
{

}

template <typename _T, typename _A>
bool	vector<_T,_A>::empty()
const
{
	return (false);
}

template <typename _T, typename _A>
void	vector<_T,_A>::reserve (size_type n)
{

}


/* ELEMENT ACCESS */
template <typename _T, typename _A>
typename vector<_T,_A>::reference	vector<_T,_A>::operator[] (size_type n)
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::const_reference	vector<_T,_A>::operator[] (size_type n)
const
{
	
}

template <typename _T, typename _A>
typename vector<_T,_A>::reference	vector<_T,_A>::at (size_type n)
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::const_reference	vector<_T,_A>::at (size_type n)
const
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::reference	vector<_T,_A>::front()
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::const_reference	vector<_T,_A>::front()
const
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::reference	vector<_T,_A>::back()
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::const_reference	vector<_T,_A>::back()
const
{

}


/* MODIFIERS */
template <typename _T, typename _A>
template <class InputIterator>
void	vector<_T,_A>::assign (InputIterator first, InputIterator last)
{

}

template <typename _T, typename _A>
void	vector<_T,_A>::assign (size_type n, const value_type& val)
{

}

template <typename _T, typename _A>
void	vector<_T,_A>::push_back (const value_type& val)
{

}

template <typename _T, typename _A>
void	vector<_T,_A>::pop_back()
{

}

// template <typename _T, typename _A>
// typename vector<_T,_A>::iterator	
// 			vector<_T,_A>::insert (iterator position, const value_type& val)
// {

// }

// template <typename _T, typename _A>
// void	vector<_T,_A>::insert (iterator position, size_type n,
// 													const value_type& val)
// {

// }

// template <typename _T, typename _A>
// template <class InputIterator>
// void	vector<_T,_A>::insert(iterator position, InputIterator first,
// 													InputIterator last)
// {

// }

// template <typename _T, typename _A>
// typename vector<_T,_A>::iterator	vector<_T,_A>::erase (iterator position)
// {

// }

// template <typename _T, typename _A>
// typename vector<_T,_A>::iterator	vector<_T,_A>::erase(iterator first,
// 															iterator last)
// {

// }

template <typename _T, typename _A>
void	vector<_T,_A>::swap (vector &x)
{

}

template <typename _T, typename _A>
void	vector<_T,_A>::clear()
{

}

/* ALLOCATOR */
template <typename _T, typename _A>
typename vector<_T,_A>::allocator_type	vector<_T,_A>::get_allocator()
const
{

}
/* NON MEMBER FUNCTION OVERLOADS */
template <class _T, class _A>
bool	operator== (const vector<_T,_A>& lhs, const vector<_T,_A>& rhs)
{
	return (0);
}

template <class _T, class _A>
bool	operator!= (const vector<_T,_A>& lhs, const vector<_T,_A>& rhs)
{
	return (0);
}

template <class _T, class _A>
bool	operator< (const vector<_T,_A>& lhs, const vector<_T,_A>& rhs)
{
	return (0);
}

template <class _T, class _A>
bool	operator<= (const vector<_T,_A>& lhs, const vector<_T,_A>& rhs)
{
	return (0);
}

template <class _T, class _A>
bool	operator> (const vector<_T,_A>& lhs, const vector<_T,_A>& rhs)
{
	return (0);
}

template <class _T, class _A>
bool	operator>= (const vector<_T,_A>& lhs, const vector<_T,_A>& rhs)
{
	return (0);
}

template <class _T, class _A>
void	swap(vector<_T,_A>& x, vector<_T,_A>& y)
{
	
}
// template <typename _T, typename _A>
}


// #include "vector.tpp"

#endif