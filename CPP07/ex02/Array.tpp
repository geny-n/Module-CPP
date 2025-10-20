/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeny <ngeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:11:11 by ngeny             #+#    #+#             */
/*   Updated: 2025/06/11 20:30:06 by ngeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Array constructor default called" << std::endl;
	_Element = NULL;
	_Size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array constructor called" << std::endl;
	_Element = new T[n];
	_Size = n;
}

template <typename T>
Array<T>::Array(const Array& copy)
{
	std::cout << "Array constructor copy called" << std::endl;
	_Element = new T[copy._Size];
	_Size = copy._Size;
	unsigned int i = 0;
	while (i < _Size)
	{
		_Element[i] = copy._Element[i];
		i++;
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& f)
{
	std::cout << "Array copy assignement called" << std::endl;
	if (this != &f)
	{
		if (_Element)
			delete[] _Element;
		_Element = new T[f._Size];
		_Size = f._Size;
		unsigned int i = 0;
		while (i < _Size)
		{
			_Element[i] = f._Element[i];
			i++;
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
    delete[] _Element;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _Size)
		throw Array::OutBandException();
	return _Element[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _Size;
}

template <typename T>
const char* Array<T>::OutBandException::what() const throw()
{
	return "Index out of bounds";
}
