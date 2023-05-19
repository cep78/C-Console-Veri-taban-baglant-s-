// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <iostream>
#include "Header.h"
#include "sql.h"
using namespace std;

int main()
{
	std::wstring deneme = L"INSERT INTO TABLO(AD) VALUES('sqlfonk')";
	sqlveriyaz(deneme);
	
	printf("dasdasda");
	getchar();
    return 0;
}

