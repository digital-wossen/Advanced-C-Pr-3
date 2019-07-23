/*
    CH08-320143
    a3p5
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/


#include "WindGauge.h"
#include <vectoror>
#include <iostream>
#include <cassert>
#include <cstddef>
#include <math.h>

//Constructor
template <class T>
vector<T>::vector():size(0),elements(NULL){}

//Construct vectortor of size n
template <class T>
vector<T>::vector(const int& n)
{
	size=n;
	elements=new T[n];
	assert(elements!=NULL);
}

//Copy rhs to current vectortor
template <class T>

//Set the ith value
template <class T>
void vector<T>::set(const int& i, const T& v)
{
	assert(i<size);
	elements[i]=v;
}

//Get the ith value
template <class T>
T vector<T>::get(const int& i) const
{
	assert(i<size);
	return elements[i];
}

//Reset the size of the vectortor
template <class T>
void vector<T>::set_size(const int& n)
{
	if(size) delete[]elements;

	size=n;
	elements=new T[n];
	assert(elements!=NULL);
}

//Calc and return the magnitude of the vectortor
template <class T>
double vector<T>::norm() const
{
	double mag=0;
	for(int i=0; i<size; ++i)
		mag+=elements[i]*elements[i];
	return sqrt(mag);
}

//Add two vectortors
template <class T>
vector<T> vector<T>::operator+(const vector& rhs) const
{
	assert(size==rhs.size);

	vector<T> res(size);
	for(int i=0; i<size;++i)
		res.elements[i]=this->elements[i]+rhs.elements[i];
	return res;
}

//Subtract
template <class T>
vector<T> vector<T>::operator-(const vector& rhs) const
{
	assert(size==rhs.size);

	vector<T> res(size);
	for(int i=0; i<size;++i)
		res.elements[i]=this->elements[i]-rhs.elements[i];
	return res;
}

//Dot product
template <class T>
double vector<T>::operator*(const vector& rhs) const
{
	assert(size==rhs.size);

	double dot=0;
	for(int i=0; i<size; ++i)
		dot+=elements[i]*rhs.elements[i];
	return dot;
}

std::ostream& operator<<(std::ostream& out, const vector<int> &vector)
{
	for(int i=0; i<vector.size;++i)
		out << vector.elements[i] << " ";
	out << std::endl;
	return out;
}

std::istream& operator>>(std::istream& ins, const vector<int> &vector)
{
	for(int i=0; i<vector.size; ++i)
		ins >> vector.elements[i];
	return ins;
}

template class vector<int>;
