
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <iostream>
using namespace std;

void ornek() {
	string str = "hello worlddd";
	wstring wstr(str.begin(), str.end());
	int a = 1;
	char b = a;
	std::wstring to_wstring(int a);
	wstring deneme = L"DADAD";

	deneme = deneme + wstr;


}
void tarihsaat(){
			struct  tm newtime;
			//__time32_t aclock;
			__time64_t aclocks;

			char buffer[64];
			errno_t errnum;
			//_time32(&aclock);
			_time64(&aclocks);
			//_localtime32_s(&newtime, &aclock);
			_localtime64_s(&newtime, &aclocks);
			errnum = asctime_s(buffer, 64, &newtime);
			printf("tarihsaat:%s", buffer);

			strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", &newtime);

			cout << buffer << endl;
}