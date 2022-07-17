#include <iostream>
#include <string>

using namespace std;

//Родитель для трайангулов
class Figure3
{
private:
	int a1 = -999, b1 = -999, c1 = -999;
	int A1 = -999, B1 = -999, C1 = -999;

public:
	virtual string display_name()
	{
		return "Треугольник: ";
	}
	Figure3(int a2, int b2, int c2, int A2, int B2, int C2)
	{
		a1 = a2, b1 = b2, c1 = c2;
		A1 = A2, B1 = B2, C1 = C2;
	}
	Figure3(int a2, int b2, int c2, int A2, int B2) //прямоугольный треугольник (угол C всегда равен 90)
	{
		a1 = a2, b1 = b2, c1 = c2;
		A1 = A2, B1 = B2, C1 = 90;
	}
	Figure3(int a2, int b2, int A2, int B2) //равнобедренный треугольник (стороны a и c равны, углы A и C равны)
	{
		a1 = c1 = a2, b1 = b2;
		A1 = C1 = A2, B1 = B2;
	}
	Figure3(int a2) //равносторонний треугольник (все стороны равны, все углы равны 60)
	{
		a1 = b1 = c1 = a2;
		A1 = B1 = C1 = 60;
	}

	int a()
	{
		return a1;
	}
	int b()
	{
		return b1;
	}
	int c()
	{
		return c1;
	}

	int A()
	{
		return A1;
	}
	int B()
	{
		return B1;
	}
	int C()
	{
		return C1;
	}
};

//Родитель для сквейеров
class Figure4
{
private:
	int a1 = -999, b1 = -999, c1 = -999, d1 = -999;
	int A1 = -999, B1 = -999, C1 = -999, D1 = -999;

public:
	virtual string display_name()
	{
		return "Четырёхугольник: ";
	}

	Figure4(int a2, int b2, int c2, int d2, int A2, int B2, int C2, int D2)
	{
		a1 = a2, b1 = b2, c1 = c2, d1 = d2;
		A1 = A2, B1 = B2, C1 = C2, D1 = D2;
	}
	Figure4(int a2, int b2) //прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
	{
		a1 = c1 = a2, b1 = d1 = b2;
		A1 = B1 = C1 = D1 = 90;
	}
	Figure4(int a2) //квадрат (все стороны равны, все углы равны 90)
	{
		a1 = b1 = c1 = d1 = a2;
		A1 = B1 = C1 = D1 = 90;
	}
	Figure4(int a2, int b2, int A2, int B2, int C2, int D2) //параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)
	{
		a1 = c1 = a2, b1 = d1 = b2;
		A1 = C1 = A2, B1 = D1 = B2;
	}
	Figure4(int a2, int A2, int B2) //ромб (все стороны равны, углы A,C и B,D попарно равны)
	{
		a1 = b1 = c1 = d1 = a2;
		A1 = C1 = A2, B1 = D1 = B2;
	}
	int a()
	{
		return a1;
	}
	int b()
	{
		return b1;
	}
	int c()
	{
		return c1;
	}
	int d()
	{
		return d1;
	}

	int A()
	{
		return A1;
	}
	int B()
	{
		return B1;
	}
	int C()
	{
		return C1;
	}
	int D()
	{
		return D1;
	}
};

//Пошли потомки трайангулы
class Right_triangle : public Figure3
{
public:
	string display_name() override
	{
		return "Прямоугольный треугольник: ";
	}
	Right_triangle(int a2, int b2, int c2, int A2, int B2) : Figure3(a2, b2, c2, A2, B2)
	{}
};
class Isosceles_triangle : public Figure3
{
public:
	string display_name() override
	{
		return "Равнобедренный треугольник: ";
	}
	Isosceles_triangle(int b2, int c2, int B2, int C2) : Figure3(b2, c2, B2, C2)
	{}
};
class Equilateral_triangle : public Figure3
{
public:
	string display_name() override
	{
		return "Равносторонний треугольник: ";
	}
	Equilateral_triangle(int a2) : Figure3(a2)
	{}
};

//Пошли потомки свкейры
class Rectangle : public Figure4
{
public:
	string display_name() override
	{
		return "Прямоугольник: ";
	}
	Rectangle(int a2, int b2) : Figure4(a2, b2)
	{}
};
class Square : public Figure4
{
public:
	string display_name() override
	{
		return "Квадрат: ";
	}
	Square(int a2) : Figure4(a2)
	{}
};
class Parallelogram : public Figure4
{
public:
	string display_name() override
	{
		return "Параллелограмм: ";
	}
	Parallelogram(int a2, int b2, int A2, int B2, int C2, int D2) : Figure4(a2, b2, A2, B2, C2, D2)
	{}
};
class Rhombus : public Figure4
{
public:
	string display_name() override
	{
		return "Ромб: ";
	}
	Rhombus(int a2, int A2, int B2) : Figure4(a2, A2, B2)
	{}
};

//Функции вывода на экран
void print_figures3(Figure3* figure)
{
	cout << figure->display_name() << endl << "Стороны: a=" << figure->a() << " b=" << figure->b() << " c=" << figure->c() << endl << "Углы: A=" << figure->A() << " B=" << figure->B() << " C=" << figure->C() << endl << endl;
}
void print_figures4(Figure4* figure)
{
	cout << figure->display_name() << endl << "Стороны: a=" << figure->a() << " b=" << figure->b() << " c=" << figure->c() << " d=" << figure->d() << endl << "Углы: A=" << figure->A() << " B=" << figure->B() << " C=" << figure->C() << " D=" << figure->D() << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	Figure3 triangle(10, 20, 30, 50, 60, 70);
	Right_triangle right_triangle(10, 20, 30, 50, 60);
	Isosceles_triangle isosceles_triangle(10, 20, 50, 60);
	Equilateral_triangle equilateral_triangle(30);

	Figure4 quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Rectangle rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40, 30, 40);
	Rhombus rhombus(30, 30, 40);

	print_figures3(&triangle);
	print_figures3(&right_triangle);
	print_figures3(&isosceles_triangle);
	print_figures3(&equilateral_triangle);

	print_figures4(&quadrilateral);
	print_figures4(&rectangle);
	print_figures4(&square);
	print_figures4(&parallelogram);
	print_figures4(&rhombus);
}
