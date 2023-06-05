

#include <iostream>
#include < cstdlib>

void* operator new(size_t size)
{
	void* ptr = malloc(size);
	std::cout << ptr << std::endl;
	std::cout << sizeof(ptr) << std::endl;
	std::cout << size << std::endl;
	if (ptr == nullptr)
	{
		throw std::bad_alloc();
    }
	return ptr;
}

void operator	delete(void* ptr) noexcept
{
	free(ptr);
}




int main()
{
	int* member = new int(10);
	std::cout << *member << std::endl;
	std::cout << member << std::endl;
	std::cout << sizeof(member) << std::endl;

	delete(member);

	return 0;
}

