/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:38:46 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/29 16:38:51 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        RobotomyRequestForm r("R1");
        Bureaucrat b("B1", 2);
        Form *f = new ShrubberyCreationForm("F1");
        f->action();
        r.action();
        Form *pres = new PresidentialPardonForm("F2");
        pres->action();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
