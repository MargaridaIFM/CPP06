#ifndef Serializer_HPP
# define Serializer_HPP

# include <iostream>

typedef std::string t_string;

class Serializer {
	private:

	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &other);
		Serializer &operator=(const Serializer &other);
};
#endif
