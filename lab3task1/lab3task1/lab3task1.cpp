#include <iostream>

using namespace std; 

int string_length(char *ptr) { 
	int i = 0;
	int size = 0;
	if (*ptr == '\0')
	{
		return 0;
	}
	for (int i = 0; *(ptr + i)!= '\0';  i++)
	{
		size = i; 
	}
	return size + 1;
}

int main() {
	char arr[] = "hsesajan";
	char* ptr = arr;
	cout << string_length(ptr) << endl; 
}