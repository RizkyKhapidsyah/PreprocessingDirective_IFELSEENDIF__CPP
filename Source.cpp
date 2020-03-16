#include <iostream>
#include <conio.h>

#define ID 1

#if  ID == 1
#define LANG "Indonesia"
#else
#define LANG "English"
#endif //  ID == 1

using namespace std;

int main()
{
	cout << "Bahasa Dipilih  : " << LANG << endl;
	_getch();
	return 0;
}
