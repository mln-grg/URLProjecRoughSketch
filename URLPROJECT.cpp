#include<iostream>
#include<fstream>
#include<conio.h>
#include <string>
using namespace std;

int main() {
	fstream f1, f2;
	string c1, c2;
	int i, j, temp=0;
	char str[100];
	char substr[20];
	f1.open("mln.txt", ios::in);
		f1 >> c1;
	//close the file
	f1.close();
	strcpy_s(str, c1.c_str());

	f2.open("grg.txt", ios::in);

	while (f2 >>c2) {
		strcpy_s(substr, c2.c_str());
		for (i = 0; str[i] != '\0'; i++)
		{
			j = 0;
			if (str[i] == substr[j])
			{
				temp = i + 1;
				while (str[i] == substr[j])
				{
					i++;
					j++;
				}

				if (substr[j] == '\0')
				{
					cout << "The URL is infected " <<"\n";
					cout <<"The keyword *"<< c2 << "* Was Detected in the provided URL";
					exit(0);
				}
				else
				{
					i = temp;
					temp = 0;
				}
			}
		}

		
	}
	f2.close();
	

	return 0;
}

