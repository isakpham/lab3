#include <iostream>

using namespace std;

void replace_chars(char* arr, char search, char replace) {
	int  i = 0;
	char *returnArr = new char[10];
	char* p2 = returnArr;
	do
	{
		if (*(arr + i) == search)
		{
			*(p2 + i) = replace;
			
		}
		else
		{
			*(p2 + i) = *(arr + i);
		}
		i++;
	} while (*(arr + i) != 'Ì'); //really scuffed solution 
	cout << p2 << endl;
}

int main() {
	char arr[] = {"Heeeejsan"};
	char* str = arr;
	char search = 'e';
	char replace = 'p';
	replace_chars(str , search, replace);

}

