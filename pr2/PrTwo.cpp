// PrTwo.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int const sizeOne = 10;
	int const sizeTwo = 10;

	int sum = 0;
    int arrayOne[sizeOne];
    int arrayTwo[sizeTwo];

	for (int i = 0; i < sizeOne; i++) {
		*(arrayOne + i) = 1 + rand() % 100;
	}
	for (int i = 0; i < sizeTwo; i++) {
		*(arrayTwo + i) = 1 + rand() % 25;
	}


	cout << "First array: ";
	for (int i = 0; i < sizeOne; i++) {
		cout << arrayOne[i] << " ";
	}

	cout << "\n" << "Second array: ";
	for (int i = 0; i < sizeTwo; i++) {
		cout << arrayTwo[i] << " ";
	}

	for (int i = 0; i < sizeOne; i++) {
		for (int j = 0; j < sizeTwo; j++){
			if (i == arrayTwo[j]) {
				sum += arrayOne[i];
				cout << "\n Index arrayOne: "<< i <<"\t arrayTwo contains element: "<< arrayTwo[j] << "\t sum += " << arrayOne[i];
				break;
			}
		}
	}

	cout << "\n"<<"The sum of the corresponding elements: "<< sum <<"\n";
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
