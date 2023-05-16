#include "MyVector.h"
#include<iostream>
MyVector::MyVector(int size) :msize{ size }, mcapacity{ size }
{
	if (msize == 0)
	{
		return;
	}
	mdynamicArray = new int[msize] {0};
}
MyVector::MyVector(int size, int arg) :msize{ size }
{
	if (msize == 0)
	{
		return;
	}
	mdynamicArray = new int[msize] {0};
	for (int i = 0; i < msize; i++)
	{
		mdynamicArray[i] = arg;
	}
}
MyVector::MyVector(int* begin, int* end) :msize{ (int)(end - begin) }
{
	if (msize == 0)
	{
		return;
	}
	mdynamicArray = new int[msize] {0};
	for (int i = 0; i < msize; i++)
	{
		mdynamicArray[i] = *begin;
		begin++;
	}
}
MyVector::MyVector(MyVector& other) :msize{ other.msize }
{
	if (msize == 0)
	{
		return;
	}
	mdynamicArray = new int[msize] {0};
	for (int i = 0; i < msize; i++)
	{
		mdynamicArray[i] = other[i];
	}
}
MyVector::~MyVector()
{
	delete mdynamicArray;
}
int MyVector::size() const
{
	return msize;
}
int MyVector::capacity() const
{
	return msize;
}
int& MyVector::operator[](int index)
{
	return mdynamicArray[index];
}
int* MyVector:: operator=(MyVector& other)
{
	msize = other.msize;
	if (msize == 0)
	{
		return mdynamicArray;
	}
	mdynamicArray = new int[msize] {0};
	for (int i = 0; i < msize; i++)
	{
		mdynamicArray[i] = other[i];
	}
	return mdynamicArray;
}
int* MyVector::begin()
{
	return mdynamicArray;
}
int* MyVector::end()
{
	return mdynamicArray + msize;
}