#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <string>

using namespace std;

int liczba;
int liczba2;
int liczba3;
string x;

int main()
{
	SetConsoleTitle(TEXT("LOADED"));

	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);

	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 600, 400, TRUE);

	cout << "co: ";
	cin >> x;

	if (x == "skip" || "kurwa" || "jajco")
	{
		goto jd;
	}
	else

	cout << "UWAGA: epilepsia: \n";
	Sleep(1000);
	cout << "5\n";
	Sleep(1000);
	cout << "4\n";
	Sleep(1000);
	cout << "3\n";
	Sleep(1000);
	cout << "2\n";
	Sleep(1000);
	cout << "1\n";
	Sleep(1000);
	cout << "0\n";
	Sleep(1000);

	//------------
	
	jd:


	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

	string y = "                                                                                                            \n";
	string z2 = x + y;

	while (true) {
		
		liczba = rand() % 100 + 1;
		liczba2 = rand() % 1000 + 1;
		liczba3 = rand() % 1000 + 1;
		if (liczba2 <= 100) { liczba2 = 500; };
		if (liczba3 <= 100) { liczba3 = 500; };
		SetConsoleTextAttribute(hCon, liczba);
		cout << z2 << liczba;
		MoveWindow(console, ConsoleRect.left, ConsoleRect.top, liczba2, liczba3, TRUE);
	}

	return 0;
}
