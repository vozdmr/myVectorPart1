#pragma once
class MyVector
{
public:
	MyVector() = default;                   // Empty container constructor (default constructor)
	~MyVector();                          // Destructor
	MyVector(int);                        //Fill constructor (Default)
	MyVector(int, int);                  //Fill constructor (Each element is a copy of val.)
	MyVector(int*, int*);                //Range constructor
	MyVector(MyVector&);               //Copy constructor

	int size() const;
	int capacity() const;
	int& operator[](int index);
	int* operator=(MyVector&);
	int* begin();
	int* end();
private:
	int msize = 0;
	int mcapacity = 0;
	int* mdynamicArray = nullptr;
};

