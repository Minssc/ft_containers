/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:29:04 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/05 14:50:29 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VECTOR_TPP__
#define __VECTOR_TPP__

// #include "vector.hpp"

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
void	vector<_T,_A>::resize (size_type n, vector<_T,_A>::value_type val)
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::size_type
					vector<_T,_A>::capacity () 
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
void	vector<_T,_A>::reserve (vector<_T,_A>::size_type n)
{

}


/* ELEMENT ACCESS */
template <typename _T, typename _A>
typename vector<_T,_A>::reference	
					vector<_T,_A>::operator[] (vector<_T,_A>::size_type n)
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::const_reference
					vector<_T,_A>::operator[] (vector<_T,_A>::size_type n)
const
{
	
}

template <typename _T, typename _A>
typename vector<_T,_A>::reference
					vector<_T,_A>::at (vector<_T,_A>::size_type n)
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::const_reference
					vector<_T,_A>::at (vector<_T,_A>::size_type n)
const
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::reference
					vector<_T,_A>::front()
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::const_reference
					vector<_T,_A>::front()
const
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::reference
					vector<_T,_A>::back()
{

}

template <typename _T, typename _A>
typename vector<_T,_A>::const_reference
					vector<_T,_A>::back()
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
void	vector<_T,_A>::assign (typename vector<_T,_A>::size_type n,
								const vector<_T,_A>::value_type& val)
{

}

// template <typename _T, typename _A>

// template <typename _T, typename _A>
// template <typename _T, typename _A>
// template <typename _T, typename _A>


}

#endif