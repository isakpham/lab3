#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;




void save(const vector<string> namedb) {
	string filename;
	cout << "Choose a file name: ";
	cin >> filename;
	ofstream file;
	file.open(filename);
	for (int i = 0; i < namedb.size(); i++)
	{
		file << namedb[i] << endl;
	}
	file.close();
}

void load(vector<string> &namedb) {
	string filename, line;
	cout << "Enter a file you want to load: ";
	cin >> filename;
	ifstream in(filename);
	if (!in)
	{
		cout << "Error! File does not exist" << endl;
	}
	while (getline(in, line))
	{
		if (line.size() > 0)
		{
			namedb.push_back(line);
		}
	}
	in.close();
}

void initialiseDatabase(vector<string>& namedb) {
	std::string a;
	std::cout << "This is going to delete every name from the Database are you sure?" << std::endl;
	std::cin >> a;
	if (a == "Yes" || a == "yes")
	{
		namedb.clear();
	}

}

void insert(vector<string>& namedb) {
	std::string name;
	bool backMenu = false;
	do
	{

		std::cout << "what want to add to the database?  (enter 'q' to return to the menu )" << std::endl;
		std::cin >> name;
		if (name == "q" || name == "Q")
		{
			backMenu = true;
		}
		if (backMenu == false)
		{
			namedb.push_back(name);;
		}
	} while (backMenu == false);

}

void search(const vector<string> namedb) {
	std::string search;
	std::cout << "Enter name: " << std::endl;
	std::cin >> search;
	std::cout << std::endl;
	for (int i = 0; i < namedb.size(); i++)
	{
		if (namedb[i].find(search) == 0)
		{
			std::cout << namedb[i] << " ";
		}

	}
	std::cout << std::endl;
}

void deleteFrom(vector<string> namedb) {
	std::string search;
	std::cout << "Enter name you want to delete: " << std::endl;
	std::cin >> search;
	std::cout << std::endl;
	for (int i = 0; i < namedb.size(); i++)
	{
		if (namedb[i] == search)
		{
			namedb.erase(namedb.begin() + i);
		}

	}
}

void print(const vector<string>& namedb) {
	for (int i = 0; i < namedb.size(); i++)
	{
		std::cout << namedb[i] << " ";
	}
	std::cout << std::endl << std::endl;
}

int main() {
	vector<string>  db = {};
	vector<string>* namedb = &db;
	int menuNumber;
	bool menu = true;
	do
	{
	
		cout << "1. initialise database" << endl << "2. insert" << endl << "3. search " << endl << "4. delete" << endl << "5. print" << endl << "6. save" << endl << "7. load" << endl << "8. quit" << endl;
		cin >> menuNumber;
		if (menuNumber == 1) {
			initialiseDatabase(*namedb);
		}
		if (menuNumber == 2) {
			insert(*namedb);
		}
		if (menuNumber == 3) {
			search(*namedb);
		}
		if (menuNumber == 4) {
			deleteFrom(*namedb);
		}
		if (menuNumber == 5) {
			print(*namedb);
		}
		if (menuNumber == 6) {
			save(*namedb);
		}
		if (menuNumber == 7) {
			load(*namedb);
		}
		if (menuNumber == 8) {
			menu = false;
		}
	
	} while (menu == true);
		
}