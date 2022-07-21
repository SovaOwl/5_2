#include <iostream>
#include <string>

using namespace std;

//Родитель
class Figure {

private:
    string figure_name, name = "Фигура";
protected:

    string get_figure_name()
    {
        return figure_name;
    }

public:
    Figure(string name)
    {
        figure_name = name;
    }
    virtual void get_info()
    {
        cout << figure_name << endl;
    }
};

//Пошли треугольники

class Triangle :public Figure
{
private:
    int a1, b1, c1;
    int A1, B1, C1;

public:
    Triangle(int a2, int b2, int c2, int A2, int B2, int C2, string name) :Figure(name)
    {
        name = name;
        a1 = a2, b1 = b2, c1 = c2, A1 = A2, B1 = B2, C1 = C2;
    }
    void get_info() override
    {
        cout << get_figure_name() << endl;
        cout << "Стороны: " << "a=" << a1 << " " << "b=" << b1 << " " << "c=" << c1 << endl;
        cout << "Углы: " << "A=" << A1 << " " << "B=" << B1 << " " << "C=" << C1 << endl << endl;
    }
};

class Right_triangle :public Triangle //прямоугольный треугольник (угол C всегда равен 90)
{
public:
    Right_triangle(int a, int b, int c, int A, int B, string name) :Triangle(a, b, c, A, B, 90, name)
    {
        name = name;
    }
};

class Isosceles_triangle : public Triangle //равнобедренный треугольник (стороны a и c равны, углы A и C равны)
{
public:
    Isosceles_triangle(int a, int b, int A, int B, string name) : Triangle(a, b, a, A, B, A, name)
    {
        name = name;
    }
};

class Equilateral_triangle : public Triangle //равносторонний треугольник (все стороны равны, все углы равны 60)
{
public:
    Equilateral_triangle(int a, string name) : Triangle(a, a, a, 60, 60, 60, name)
    {
        name = name;
    }
};

//Пошли четырёхугольники

class Quadrilateral :public Figure
{
private:
    int a1, b1, c1, d1;
    int A1, B1, C1, D1;

public:

    Quadrilateral(int a2, int b2, int c2, int d2, int A2, int B2, int C2, int D2, string name) :Figure(name)
    {
        name = name;
        a1 = a2, b1 = b2, c1 = c2, d1 = d2, A1 = A2, B1 = B2, C1 = C2, D1 = D2;
    }
    void get_info() override
    {
        cout << get_figure_name() << endl;
        cout << "Стороны: " << "a=" << a1 << " " << "b=" << b1 << " " << "c=" << c1 << " " << "d=" << d1 << endl;
        cout << "Углы: " << "A=" << A1 << " " << "B=" << B1 << " " << "C=" << C1 << " " << "D=" << D1 << endl << endl;
    }
};

class Rectangle : public Quadrilateral //прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
{
public:
    Rectangle(int a, int b, string name) : Quadrilateral(a, b, a, b, 90, 90, 90, 90, name)
    {
        name = name;
    }
};

class Square : public Quadrilateral //квадрат (все стороны равны, все углы равны 90)
{
public:
    Square(int a, string name) : Quadrilateral(a, a, a, a, 90, 90, 90, 90, name)
    {
        name = name;
    }
};

class Parallelogram : public Quadrilateral //параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)
{
public:
    Parallelogram(int a, int b, int A, int B, string name) : Quadrilateral(a, b, a, b, A, B, A, B, name)
    {
        name = name;
    }
};

class Rhombus : public Quadrilateral //ромб (все стороны равны, углы A,C и B,D попарно равны)
{
public:
    Rhombus(int a, int A, int B, string name) : Quadrilateral(a, a, a, a, A, B, A, B, name)
    {
        name = name;
    }
};

//Функции вывода на экран
void print_figures(Figure* figure)
{
    figure->get_info();
}
int main()
{
    setlocale(LC_ALL, "Rus");

    Triangle triangle(10, 20, 30, 50, 60, 70, "Треугольник:");
    Right_triangle  right_triangle(10, 20, 30, 50, 60, "Прямоугольный треугольник:");
    Isosceles_triangle isosceles_triangle(10, 20, 50, 60, "Равнобедренный треугольник:");
    Equilateral_triangle equilateral_triangle(30, "Равносторонний треугольник:");

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80, "Четырёхугольник:");
    Rectangle rectangle(10, 20, "Прямоугольник:");
    Square square(20, "Квадрат:");
    Parallelogram parallelogram(20, 30, 30, 40, "Параллелограмм:");
    Rhombus rhombus(30, 30, 40, "Ромб:");

    print_figures(&triangle);
    print_figures(&right_triangle);
    print_figures(&isosceles_triangle);
    print_figures(&equilateral_triangle);

    print_figures(&quadrilateral);
    print_figures(&rectangle);
    print_figures(&square);
    print_figures(&parallelogram);
    print_figures(&rhombus);
}
