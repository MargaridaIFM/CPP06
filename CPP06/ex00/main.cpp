/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 21:42:54 by mfrancis          #+#    #+#             */
/*   Updated: 2025/10/23 21:45:58 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        ScalarConverter::convert[argv[1]];
        return 1;
    }
    std::cerr " Wrong number of arguments!" << std::endl;
    return 0;
}