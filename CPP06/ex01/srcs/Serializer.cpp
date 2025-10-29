#include "Serializer.h"

Serializer::Serializer() {
	std::cout << "Default constructor called" << std::endl;
}

Serializer::~Serializer() {
	std::cout << "Destructor called" << std::endl;
}

Serializer::Serializer(const Serializer &other) {
	*this = other;
}

Serializer &Serializer::operator=(const Serializer &other) {
	(void)other;
	return *this;
}
