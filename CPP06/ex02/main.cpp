#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>

Base * generate(void)
{	
	srand(static_cast<unsigned int>(time(NULL)));
	switch (std::rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		std::cerr << "Error" << std::endl;
		return (NULL);
	}
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;

}
void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
		try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	
}
int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	Base *newBase = generate();

	std::cout << "Identify from pointer: " << std::endl;
	identify(newBase);

	std::cout << "Identify from ref: " << std::endl;
	identify(*newBase);

	return 0;
}