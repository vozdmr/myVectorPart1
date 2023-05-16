#include<iostream>
#include"MyVector.h"
int main()
{
	// constructors used in the same order as described above:
	std::cout << "constructing vectors \n \n";
	MyVector first;                                // empty vector of ints
	MyVector second(4, 100);                       // four ints with value 100
	MyVector  third(second.begin(), second.end());  // iterating through second
	MyVector fourth(third);                       // a copy of third

	// the iterator constructor can also be used to construct from arrays:
	int myints[] = { 16,2,77,29 };
	MyVector fifth(myints, myints + sizeof(myints) / sizeof(int));

	std::cout << "The contents of first is:";
	for (int* it = first.begin(); it != first.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "The contents of second are:";
	for (int* it = second.begin(); it != second.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "The contents of third are:";
	for (int* it = third.begin(); it != third.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "The contents of fourth are:";
	for (int* it = fourth.begin(); it != fourth.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "The contents of fifth are:";
	for (int* it = fifth.begin(); it != fifth.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	// vector assignment
	std::cout << "\nvector assignment \n \n";
	MyVector foo(3, 0);
	MyVector bar(5, 0);
	MyVector func;
	std::cout << "Size of foo: " << int(foo.size()) << '\n';
	std::cout << "Size of bar: " << int(bar.size()) << '\n';
	std::cout << "Size of func: " << int(func.size()) << '\n';
	bar = foo;
	foo = func;
	std::cout << "Size of foo: " << int(foo.size()) << '\n';
	std::cout << "Size of bar: " << int(bar.size()) << '\n';
	std::cout << "Size of func: " << int(func.size()) << '\n';

	return 0;
}