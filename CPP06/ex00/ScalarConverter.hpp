/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:25:56 by mfrancis          #+#    #+#             */
/*   Updated: 2025/10/29 20:59:19 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <cstdlib>
#include <cmath>


class ScalarConverter
{
        private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        ~ScalarConverter();    
    

        class InvalidLiteralException : public std::exception
        {
            const char *what() const throw();
        };

        // pseudo-literals : -inff, +inff, and nanf.
        // pseudo-literals : -inf, +inf, and nan
        // sstream -- https://www.geeksforgeeks.org/cpp/stringstream-c-applications/
        
        public:
        static void convert(const std::string &literal);
};

bool    isChar(const std::string &literal);
bool    isFloat(const std::string &literal);
bool    isInt(const std::string &literal);
bool    isDouble(const std::string &literal);
bool    isPseudoLiteral(const std::string &literal);

#endif