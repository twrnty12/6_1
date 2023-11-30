﻿// Задача 1. Программа с ошибками
//

#include <iostream>

struct point 
{
	double m_x = 0.0;
	double m_y = 0.0;
	
	point(double x, double y) 
	{
		m_x = x;
		m_y = y;
	}
};

void print_point(const point& point_object) 
{
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}

int main()
{
	for (int i = 0; i < 5; i++) 
	{
		point my_point(i, 2 * i);
		print_point(my_point);
	}
	return 0;
}