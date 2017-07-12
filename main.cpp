#include <iostream>
#include "help.h"

/*!
@mainpage Основная страница документации
- @ref main Основной (начальный) класс
- @ref tell Рассказ истории
- @ref cry Крик ужаса
*/

/*! 
@class main 
@brief Тело программы

@detailed Главный класс, с которого начинается рассказ
*/ 

int main()
{
	std::cout << "Today I want to tell you about terruble thing..." << std::endl;
	void tell();
	void cry();
	return 0;
}
