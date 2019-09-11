// ConsoleApplication1.cpp : Defines the entry point for the application.
///////////////////////////////////
//CS 241 - Assignment 1 Program
//Your Name
//Date Completed
///////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool IsSet(string filename);

int main()
{
	string data[2] = { "data1.txt","data2.txt" };

	for (int i = 0; i < 2; i += 1)
	{
		cout << data[i] << ((IsSet(data[i])) ? (" does ") : (" does not ")) << "represent a set\n";
	}

	fstream fi;
	fi.open("data1.txt", fstream::in);
	if (fi.is_open())
	{
		fi << "is a set\n";
	}
	else
	{
		fi << "is not a set\n";
	}
	fi.close();
	return 0;
return 0;
}
