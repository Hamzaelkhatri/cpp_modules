/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:25:58 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/29 16:25:59 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;

public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
    class RobotomizedFailed : public std::exception
    {
        virtual const char *what() const throw();
    };
    ~RobotomyRequestForm();
    std::string gettarget();
    void action() const;
};

#endif