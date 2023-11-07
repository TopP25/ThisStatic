// ThisStatic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;

struct Dlist {
	int i;
	Dlist* left;
	Dlist* right;
};

class Point {
	int x;
	int y;
	int z;
public:
	static int i;
	Point(int xP, int yP, int zP) : x {xP}, y{yP}, z{zP} {
		i++;
	}

	Point() : Point(0, 0, 0) {}

	Point(int x) : Point(x, 0, 0) {}

	int sum(int x) {
		return this->x + x;
	}

	int sum(int x, int y) {
		return sum(x) + y;
	}

	static int getI() {
		return i;

	}

};

int Point::i = 0;

class Pub {
	vector<Point> point;
public:
	Pub() {
		for (int i = 0; i < 40; i++)
		{
			point.push_back(Point());
		}
		
	}
	~Pub() {
		cout << "DEST Pub" << endl;
	}
};

int main()
{

	Point* point = new Point[14];
	cout << point->getI() << endl;
	Point* point2 = new Point();
	cout << Point::getI() << endl;
	Pub pub;
	cout << Point::getI() << endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
