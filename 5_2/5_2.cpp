#include <iostream>
#include <string>

using namespace std;

class Figure3
{
private:
	string name = "Плюмбус треугольный: ";
	int a = -999, b = -999, c = -999, d = -999;
	int A = -999, B = -999, C = -999, D = -999;

public:
	virtual string display_name()
	{
		return name;
	}
	virtual string side_lengths()
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c) + " " + "d=" + to_string(d);
	}
	virtual string angle_value()
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C) + " " + "D=" + to_string(D);
	}
};

class Figure4
{
private:
	string name = "Плюмбус квадратный: ";
	int a = -999, b = -999, c = -999;
	int A = -999, B = -999, C = -999;

public:
	virtual string display_name()
	{
		return name;
	}
	virtual string side_lengths()
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	virtual string angle_value()
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}
};

class Triangle : public Figure3
{
private:
	string name = "Треугольник: ";
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};

class Right_triangle : public Figure3
{
private:
	string name = "Прямоугольный треугольник: ";
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 90;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};

class Isosceles_triangle : public Figure3
{
private:
	string name = "Равнобедренный треугольник: ";
	int a = 10, b = 20, c = 10;
	int A = 50, B = 60, C = 50;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};

class Equilateral_triangle : public Figure3
{
private:
	string name = "Равносторонний треугольник: ";
	int a = 30, b = 30, c = 30;
	int A = 60, B = 60, C = 60;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};

class Quadrilateral : public Figure4
{
private:
	string name = "Четырёхугольник: ";
	int a = 10, b = 20, c = 30, d = 40;
	int A = 50, B = 60, C = 70, D = 80;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};

class Rectangle : public Figure4
{
private:
	string name = "Прямоугольник: ";
	int a = 10, b = 20, c = 10, d = 20;
	int A = 90, B = 90, C = 90, D = 90;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};

class Square : public Figure4
{
private:
	string name = "Квадрат: ";
	int a = 20, b = 20, c = 20, d = 20;
	int A = 90, B = 90, C = 90, D = 90;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};

class Parallelogram : public Figure4
{
private:
	string name = "Параллелограмм: ";
	int a = 20, b = 30, c = 20, d = 30;
	int A = 30, B = 40, C = 30, D = 40;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};

class Rhombus : public Figure4
{
private:
	string name = "Ромб: ";
	int a = 30, b = 30, c = 30, d = 30;
	int A = 30, B = 40, C = 30, D = 40;

public:
	string display_name() override
	{
		return name;
	}
	string side_lengths() override
	{
		return "a=" + to_string(a) + " " + "b=" + to_string(b) + " " + "c=" + to_string(c);
	}
	string angle_value() override
	{
		return "A=" + to_string(A) + " " + "B=" + to_string(B) + " " + "C=" + to_string(C);
	}

};



void print_figures3(Figure3* figure3)
{
	cout << figure3->display_name() << endl << "Стороны: " << figure3->side_lengths() << endl << "Углы: " << figure3->angle_value() << endl << endl;
}
void print_figures4(Figure4* figure4)
{
	cout << figure4->display_name() << endl << "Стороны: " << figure4->side_lengths() << endl << "Углы: " << figure4->angle_value() << endl << endl;
}


int main()
{
	setlocale(LC_ALL, "Rus");

	Triangle triangle;
	Right_triangle right_triangle;
	Isosceles_triangle isosceles_triangle;
	Equilateral_triangle equilateral_triangle;
	Quadrilateral quadrilateral;
	Rectangle rectangle;
	Square square;
	Parallelogram rarallelogram;
	Rhombus rhombus;

	print_figures3(&triangle);
	print_figures3(&right_triangle);
	print_figures3(&isosceles_triangle);
	print_figures3(&equilateral_triangle);
	print_figures4(&quadrilateral);
	print_figures4(&rectangle);
	print_figures4(&square);
	print_figures4(&rarallelogram);
	print_figures4(&rhombus);
}