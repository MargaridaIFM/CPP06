/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:33:09 by mfrancis          #+#    #+#             */
/*   Updated: 2025/10/29 21:37:30 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool    isPseudoLiteral(const std::string &literal)
{
    if(literal == "nan" || literal == "nanf" ||
        literal == "+inf" || literal == "-inf" ||
        literal == "+inff" || literal == "-inff")
        {
            std::cout << "char: impossible"<< std::endl;
            std::cout << "int: impossible"<< std::endl;
            if (!literal.empty() && literal[literal.size() - 1] == 'f')
                std::cout << "float: " << literal << std::endl;
            else
                std::cout << "float: " << literal << "f" << std::endl;
            if (!literal.empty() && literal[literal.size() - 1] == 'f')
                std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
            else
                std::cout << "double: " << literal << std::endl;
            return true;
        }
    return false;
}

bool    isChar(const std::string &literal)
{
    if(literal.size() == 1 && !std::isdigit(static_cast<unsigned char>(literal[0])))
    {
        char c = literal[0];
        int i = static_cast<int>(c);
        float f = static_cast<float>(c);
        double d = static_cast<double>(c);
        
        if (std::isprint(static_cast<unsigned char>(c)))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
            
        std::cout << "int: " << i << std::endl;
        // std::cout << std::fixed << std::setprecision(1); can i use this?
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
        return true;
    }
    return false;
}

bool isFloat(const std::string &literal)
{
    std::string s;
    if(literal[literal.size() - 1] == 'f')
    {
    s = literal.substr(0, literal[literal.size() - 1]);
    float f = std::strtof(s.c_str(), NULL);
    
    std::cout << "char: ";
    if (std::isnan(f) || std::isinf(f) || f < 0 || f > 127)
        std::cout << "impossible\n";
    else if (!isprint(static_cast<int>(f)))
        std::cout << "Non displayable\n";
    else
        std::cout << "'" << static_cast<char>(f) << "'\n";
        
    std::cout << "int: ";
    if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
            std::cout << "impossible\n";
    else
        std::cout << static_cast<int>(f) << "\n";
    
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
        return true;
    }
    return false;
}
bool isDouble(const std::string &literal)
{
    double d = std::strtod(literal.c_str(), NULL);

    if(d)
    {
        if(d < 0 || d > 127)
            std::cout << "char: impossible" << std::endl;
        else if (!isprint(d))
            std::cout << "char: Non displayable\n";
        else
            std::cout << "char: " << static_cast<char>(d) << "'\n";
        
        if(d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
            std::cout << "int: impossible\n";
        else
            std::cout << "int: " << d << std::endl;
       if (d > std::numeric_limits<float>::max() || d < -std::numeric_limits<float>::max())
                std::cout << "float: impossible\n";
        else
            std::cout << "float: " << static_cast<float>(d) << ".f" << std::endl;
        std::cout << "double: " << d <<  std::endl;
        return true;
    }
    return false;
}
bool isInt(const std::string &literal)
{
    int i = std::strtol(literal.c_str(), NULL, 10);
    if(i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
            std::cout << "int: impossible\n";
    else
    {
        if(i < 0 || i > 127)
            std::cout << "char: impossible" << std::endl;
        else if (!isprint(i))
            std::cout << "char: Non displayable\n";
        else
            std::cout << "char: " << static_cast<char>(i) << "'\n";
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << ".f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
        return true;
    }
    return false;
}