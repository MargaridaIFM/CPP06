/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:25:56 by mfrancis          #+#    #+#             */
/*   Updated: 2025/10/28 19:00:55 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
￼
#include <iostream>

class ScalarConverter
{
        private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        ~ScalarConverter();    
        
        int     checkType(const std::string &literal);
        void    toChar(const std::string &literal);
        void    toInt(const std::string &literal);
        void    toFloat(const std::string &literal);
        void    toDouble(const std::string &literal);

        class InvalidLiteralException : public std::exception
        {
            const char *what() const throw();
        };

        // pseudo-literals : -inff, +inff, and nanf.
        // pseudo-literals : -inf, +inf, and nan
        // sstream -- https://www.geeksforgeeks.org/cpp/stringstream-c-applications/
        
        public:
        static void convert(const std::string &literal);
}
#endif