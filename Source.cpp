#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	char input;

	while (true) {
		input = getch();
		cout << "You entered: " << input << endl;
	}

	return 0;
}