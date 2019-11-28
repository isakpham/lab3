# include <iostream>

using namespace std;

int  average_salary(const int salaries[], const int employees ){
	int avg_wage = 0;
	int sum = 0;
	for (int i = 0; i < employees; i++)
	{
		sum  = sum + *(salaries + i);		
	}
	avg_wage = (sum/employees);
	
	return avg_wage;
	
}

int main(){
	int*arr = new int[50];
	int* ptr = arr;
	arr[0] = 231;
	arr[1] = 1231231;
	arr[2] = 2321;
	int  employees = 3; 
	cout << average_salary(ptr, employees) << endl;
	delete[] arr;
}