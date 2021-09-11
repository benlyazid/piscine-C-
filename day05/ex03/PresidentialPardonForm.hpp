/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:12:27 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 08:18:31 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIAL___
# define  PRESIDENTIAL___

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		const std::string target;
	public:
		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &sh_form);
		PresidentialPardonForm& operator =(const PresidentialPardonForm &sh_form);
		virtual void execute(Bureaucrat const & executor) const;
};

# endif