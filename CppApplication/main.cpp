#include "pch.h"
using namespace std;

int main()
{
	char str;
	cout << "Press 'F' to see something fun ;)" << std::endl;
	u_input : cin >> str;
	if (str == 'f' || str == 'F')
	{
		ShellExecuteA(NULL, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOWDEFAULT);
		return 0;
	}
	else
	{
		goto u_input;
	}
}
