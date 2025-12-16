// SHOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int choice_fruit;
int choice_veg;
int choice_tea;

int quantity_fruit;
int quantity_veg;
int quantity_tea;

const int fruit_size = 4;
const int veg_size = 3;
const int tea_size = 2;
const int category_size = 3;

string categorys[category_size] = { "Категория - Соки Фруктовые", "Категория - Соки Овощные", "Категория - Чаи" };

string fruit_names[fruit_size] = { "Яблочный сок", "Апельсиновый сок", "Абрикосовый сок", "Грушевый сок" };
string veg_names[veg_size] = { "Томатный сок", "Луковый сок", "Огуречный сок" };
string tea_names[tea_size] = { "Чесночный чай", "Петрушечный чай" };

int fruit_prices[fruit_size] = { 100, 120, 150, 130 }; // яблочный, апельсиновый, абрикосовый, грушевый
int veg_prices[veg_size] = { 80, 90, 85 }; // томатный, луковый, огуречный
int tea_prices[tea_size] = { 200, 180 }; // чесночный, петрушечный

int fruit_korz[fruit_size] = { 0 };
int veg_korz[veg_size] = { 0 };
int tea_korz[tea_size] = { 0 };

bool firstFruit = false;
bool firstVeg = false;
bool firstTea = false;


void menu_();

int main()
{
   

    setlocale(LC_ALL, "ru");
    
    menu_();

    
}

void menu_()
{
    while (true)
    {
        system("cls");
        cout << "=================================================================\n+++++++++++++++++++++++++ Магазин +++++++++++++++++++++++++++++++\n====================== Соки Радосвета ===========================\n                      ";
        int menu;
        cout << "\nВыберите категорию товаров\n 1.Соки Фруктовые\n 2.Соки Овощные \n 3.Чаи\n 4.Корзина\n";
        cout << "Введите № категории товара : ";
        if (cin >> menu)
        {
            //////fruit
            if (menu == 1)
            {



                system("cls");
                cout << "=================================================================\n+++++++++++++++++++++++++ Магазин +++++++++++++++++++++++++++++++\n====================== Соки Радосвета ===========================\n \n                     ";
                cout << categorys[0] << "\n";
                for (int i = 0; i < fruit_size; i++)
                {
                    cout << i + 1 << "." << fruit_names[i] << "\t= " << fruit_prices[i] << "\n";
                }
                cout << "0.Назад\n";
                cout << "Выберите нужный вам товар: ";
                cin >> choice_fruit;

                if (choice_fruit > 0 && choice_fruit <= 3) 
                {
                    
                    cout << "Сколько литров? ";
                    cin >> quantity_fruit;

                    fruit_korz[choice_fruit - 1];
                    
                    cout << "Добавлено!\n";
                    firstFruit = true;
                    
                }

                if (choice_fruit == 0)
                {
                    system("cls");
                    continue;

                }
                else
                {
                    cout << " Вы ввели неверный номер товара\n";
                }

            }
            //////veg
            if (menu == 2)
            {


                system("cls");
                cout << "=================================================================\n+++++++++++++++++++++++++ Магазин +++++++++++++++++++++++++++++++\n====================== Соки Радосвета ===========================\n \n                     ";
                cout << categorys[1] << "\n";
                for (int i = 0; i < veg_size; i++)
                {
                    cout << i + 1 << "." << veg_names[i] << "\t= " << veg_prices[i] << "\n";
                }
                cout << "0.Назад\n";
                cout << "Выберите нужный вам товар: ";
                cin >> choice_veg;

                if (choice_veg > 0 && choice_veg <= 3) {
                    
                    cout << "Сколько литров? ";
                    cin >> quantity_veg;
                    veg_korz[choice_veg - 1] += quantity_veg;
                    cout << "Добавлено!\n";
                    firstVeg = true;
                }

                if (choice_veg == 0)
                {
                    system("cls");
                    continue;

                }
                else
                {
                    cout << " Вы ввели неверный номер товара\n";
                }
            }

            //////tea
            if (menu == 3)
            {


                system("cls");
                cout << "=================================================================\n+++++++++++++++++++++++++ Магазин +++++++++++++++++++++++++++++++\n====================== Соки Радосвета ===========================\n \n                     ";
                cout << categorys[2] << "\n";
                for (int i = 0; i < tea_size; i++)
                {
                    cout << i + 1 << "." << tea_names[i] << "\t= " << tea_prices[i] << "\n";
                }
                cout << "0.Назад\n";
                cout << "Выберите нужный вам товар: ";
                cin >> choice_tea;

                if (choice_tea > 0 && choice_tea <= 3) {
                   
                    cout << "Сколько литров? ";
                    cin >> quantity_tea;
                    tea_korz[choice_tea - 1] += quantity_tea;
                    cout << "Добавлено!\n";
                    firstTea = true;
                }

                if (choice_tea == 0)
                {
                    system("cls");
                    continue;
                    
                }
                else
                {
                    cout << " Вы ввели неверный номер товара\n";
                }
            }
/////////////////////////////////////////////////////////////////////////////////////

            if (menu == 4)
            {
                if (firstFruit == false, firstVeg == false, firstTea = false)
                {
                
                
                    system("cls");
                    cout << "\nВаша корзина пуста\n\n";
                    Sleep(2500);
                    continue;
                }
                else
                {
                    if (firstFruit == false)
                    {

                    }
                    else
                    {
                        for (int i = 0; i < fruit_size; i++)
                        {
                            if (fruit_korz[i] > 0)
                            {
                                cout << fruit_names[fruit_korz[i]];
                            }
                        }
                    }

                    if (firstVeg == false)
                    {

                    }
                    else
                    {
                        for (int i = 0; i < veg_size; i++)
                        {
                            if (veg_korz[i] > 0)
                            {
                                cout << veg_korz[i];
                            }

                        }
                    }
                    if (firstTea == false)
                    {

                    }
                    else
                    {
                        for (int i = 0; i < tea_size; i++)
                        {
                            if (tea_korz[i] > 0)
                            {
                                cout << tea_names[tea_korz[i]];
                            }
                        }
                    }
                }
                
                

            }

            if (menu == 0)
            {
                system("cls");
                cout << "\n\nОшибка: Такого номера категории не существует \n";
                
            }

        }

        
        
        Sleep(4000);
        continue;
    }
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
