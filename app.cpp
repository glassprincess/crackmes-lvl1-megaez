#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include <conio.h>

int main()
{
	std::string password, userpass; password = "GAchi228REMIXcppSUCK";

	std::cout << "hello please enter the password: ";
	std::cin >> userpass;

	if (userpass == password)
	{
		std::cout << "yeah u got it, right password or path" << std::endl;
	}
	else
	{
		std::cout << "wrong password or path,  try again!" << std::endl;
	}
	_getch();
}
