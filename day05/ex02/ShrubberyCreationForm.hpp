/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:46:44 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 14:54:58 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
{
	private :
		const std::string target;
	public :
		ShrubberyCreationForm(std::string const target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &sh_form);
		ShrubberyCreationForm& operator =(const ShrubberyCreationForm &sh_form);
		virtual void execute(Bureaucrat const & executor) const;

};