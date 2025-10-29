/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:25:56 by mfrancis          #+#    #+#             */
/*   Updated: 2025/10/29 21:40:38 by mfrancis         ###   ########.fr       */
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
        
        public:
        static void convert(const std::string &literal);
};

bool    isChar(const std::string &literal);
bool    isFloat(const std::string &literal);
bool    isInt(const std::string &literal);
bool    isDouble(const std::string &literal);
bool    isPseudoLiteral(const std::string &literal);

#endif