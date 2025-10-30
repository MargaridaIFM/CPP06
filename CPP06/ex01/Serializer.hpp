#ifndef Serializer_HPP
# define Serializer_HPP

#include <string>
#include <iostream>
#include <stdint.h> 

typedef struct Data
{
	std::string		name;
	size_t			age;
	unsigned int 	grade;
}				Data;

class Serializer
{
	public:
	Serializer();
	~Serializer();
	Serializer(const Serializer &other);
	Serializer &operator=(const Serializer &other);
	
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
#endif
