/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:57:01 by mfrancis          #+#    #+#             */
/*   Updated: 2025/10/29 21:07:41 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &literal)
{
    if(isPseudoLiteral(literal))
        return ;
    else if(isChar(literal))
        return ;
    else if(isFloat(literal))
        return ;
    else if(isDouble(literal))
        return ;
    else if(isInt(literal))
        return ;
    else
        std::cerr << "Invalid literal!" << std::endl;
}
