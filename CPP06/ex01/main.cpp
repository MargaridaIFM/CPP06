#include "Serializer.hpp"

int main()
{
	Data data;

	data.name = "Maggie";
	data.age = 36;
	data.grade = 100;
	
	std::cout << "data ptr: " << &data << std::endl;
	std::cout << "Name: " << data.name << std::endl; 
	std::cout << "Age: " << data.age << std::endl; 
	std::cout << "Grade: " << data.grade << std::endl; 

	uintptr_t raw = Serializer::serialize(&data);

	Data *new_data = Serializer::deserialize(raw);

	std::cout << "New_data ptr: " << new_data << std::endl;
	std::cout << "Name: " << new_data->age << std::endl; 
	std::cout << "Age: " << new_data->age << std::endl; 
	std::cout << "Grade: " << new_data->grade << std::endl; 

	return 0;
}
