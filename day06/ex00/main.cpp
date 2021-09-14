/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:43:10 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/13 11:51:30 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"
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

void check_util(Objet &obj)
{
		obj.check_fuct();
}
int main()
{
	// Objet *obj_0 = new Triangle("triangle_0"); //upcasat
	// obj_0->colore();
	// //obj_0->check_fuct();
	
	// Square *square_0 = (Square*)new Objet("objet_square"); //down cast
	// square_0->colore();
	// //square_0->check_fuct();
	
	// Circle *c_0 = (Circle*)new Triangle("Circle_by_Triangle");
	// c_0->print_type_circle();
	// c_0->colore();
	// //c_0->check_fuct();
	// Square sq2("my_square");
	// check_util(sq2);
	// return (0);
	int i = 42;
	char c = 'a';
	float f = static_cast<float>(c);
	std::cout << f << std::endl;
}