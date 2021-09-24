/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:43:10 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 13:55:42 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
class Objet
{
	private:
		std::string type;
	public:
		Objet(std::string Type): type(Type){}
		void draw(){std::cout << "DRAW A "<< type << "\n";}
		void remove(){std::cout << "REMOVE A "<< type << "\n";}
		void colore(){std::cout << "COLORE  A "<< type << "\n";}
		virtual void check_fuct(){std::cout << ("CHECK FROM OBJECT\n");}

};

class Triangle : public Objet
{	
	private :
		std::string object_type;
	public :
		Triangle(std::string type) : Objet(type){object_type = type;}
		void print_type_triangle(){std::cout << " MY TYPE IS : " << object_type << std::endl;}
		virtual void check_fuct(){std::cout << ("CHECK FROM Triangle\n");}
	
};

class Square : public Objet
{	
	private :
		std::string object_type;
	public :
		Square(std::string type) : Objet(type){object_type = type;}
		void print_type_square(){std::cout << " MY TYPE IS : " << object_type << std::endl;}
		void check_fuct(){std::cout << ("CHECK FROM OBJECT Square\n");}

	
};

class Circle : public Objet
{	
	private :
		std::string object_type;
	public :
		Circle(std::string type) : Objet(type){object_type = type;}
		void print_type_circle(){std::cout << " MY TYPE IS : " << object_type << std::endl;}
		void check_fuct(){std::cout << ("CHECK FROM OBJECT Circle\n");}

};

	
	
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error in number of ARG :(\n";
		return (1);
	}
	Convert convert(argv[1]);
	convert_funct(convert);
	return (0);
}