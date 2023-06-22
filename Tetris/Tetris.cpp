#include <conio.h>
#include <iostream> 
#include <vector> 
#include <time.h> 
#include <string> 
#include <fstream> 
#include <Windows.h>
#include <windows.h>
#include <algorithm>
#include <thread>
#include<stdlib.h>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
vector<vector<int>> vec_2;
vector<vector<int>> vec_1;

int k = 1;
int polochenie = 1;
int color = 4;
int ochki = 0;
int figura = 1;

int chek_1 = 0;
int chek_2 = 0;
int chek_3 = 0;
int chek_4 = 0;

int x_1 = 4;
int x_2 = 5;
int x_3 = 6;
int x_4 = 7;

int y_1 = k - 1;
int y_2 = k - 1;
int y_3 = k - 1;
int y_4 = k - 1;

int x_1_stop = 0;
int x_2_stop = 0;
int x_3_stop = 0;
int x_4_stop = 0;
 

class Palka {
public:
	//	int x = 0;
	int perekl = 0;
	int position(int i, int j) {

		if (y_1 == chek_1 - 1 || y_2 == chek_2 - 1 || y_3 == chek_3 - 1 || y_4 == chek_4 - 1)
		{
			if (perekl == 0)
			{
				for (int i = 0; i < 18; i++)
				{
					vector<int> temp;
					temp = vec_1[i + 1];
					for (int j = 0; j < 20; j++)
					{
						if (i == y_1 - 1)
						{
							if (j == (x_1))
							{
								temp[j] = 2;
							}
						}
						if (i == y_2 - 1)
						{
							if (j == (x_2))
							{
								temp[j] = 2;
							}
						}
						if (i == y_3 - 1)
						{
							if (j == (x_3))
							{
								temp[j] = 2;
							}
						}
						if (i == y_4 - 1)
						{
							if (j == (x_4))
							{
								temp[j] = 2;
							}
						}

					}
					vec_1[i + 1] = temp;
				}
				k--;
				perekl = 1;
			}
		}
		if (i == y_1)
		{
			if (j == (x_1 - 1))
			{
				return 2;
			}
		}
		if (i == y_2)
		{
			if (j == (x_2 - 1))
			{
				return 2;
			}
		}
		if (i == y_3)
		{
			if (j == (x_3 - 1))
			{
				return 2;
			}
		}
		if (i == y_4)
		{
			if (j == (x_4 - 1))
			{
				return 2;
			}
		}
		return 1;
	}
	void povorot() {
		if (polochenie == 3)
		{
			polochenie = 1;
		}
		else if (polochenie == 4)
		{
			polochenie = 2;
		}
		if (polochenie == 1)
		{
			y_1 = k - 1;
			y_2 = k - 1;
			y_3 = k - 1;
			y_4 = k - 1;
			x_1 = x_2 - 1;
			x_3 = x_2 + 1;
			x_4 = x_2 + 2;
		}
		else if (polochenie == 2)
		{
			y_1 = k - 2;
			y_2 = k - 1;
			y_3 = k;
			y_4 = k + 1;
			x_1 = x_2;
			x_3 = x_2;
			x_4 = x_2;
		}
		while (x_1 < 1)
		{
			x_1++;
			x_2++;
			x_3++;
			x_4++;
		}
		while (x_4 > 18)
		{
			x_1--;
			x_2--;
			x_3--;
			x_4--;
		}
	}
}Palka;

class Z_obraznay {
public:
	//	int x = 0;
	int perekl = 0;
	int position(int i, int j) {

		if (y_1 == chek_1 - 1 || y_2 == chek_2 - 1 || y_3 == chek_3 - 1 || y_4 == chek_4 - 1)
		{
			if (perekl == 0)
			{
				for (int i = 0; i < 18; i++)
				{
					vector<int> temp;
					temp = vec_1[i + 1];
					for (int j = 0; j < 20; j++)
					{
						if (i == y_1 - 1)
						{
							if (j == (x_1))
							{
								temp[j] = 2;
							}
						}
						if (i == y_2 - 1)
						{
							if (j == (x_2))
							{
								temp[j] = 2;
							}
						}
						if (i == y_3 - 1)
						{
							if (j == (x_3))
							{
								temp[j] = 2;
							}
						}
						if (i == y_4 - 1)
						{
							if (j == (x_4))
							{
								temp[j] = 2;
							}
						}

					}
					vec_1[i + 1] = temp;
				}
				k--;
				perekl = 1;
			}
		}
		if (i == y_1)
		{
			if (j == (x_1 - 1))
			{
				return 2;
			}
		}
		if (i == y_2)
		{
			if (j == (x_2 - 1))
			{
				return 2;
			}
		}
		if (i == y_3)
		{
			if (j == (x_3 - 1))
			{
				return 2;
			}
		}
		if (i == y_4)
		{
			if (j == (x_4 - 1))
			{
				return 2;
			}
		}
		return 1;
	}
	void povorot() {
		if (polochenie == 3)
		{
			polochenie = 1;
		}
		else if (polochenie == 4)
		{
			polochenie = 2;
		}
		if (polochenie == 1)
		{
			y_1 = k - 1;
			y_2 = k - 1;
			y_3 = k;
			y_4 = k;
			x_1 = x_2 - 1;
			x_2 = x_2;
			x_3 = x_2;
			x_4 = x_2 + 1;
		}
		else if (polochenie == 2)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k;
			y_4 = k + 1;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2 - 1;
		}
		while (x_1 < 1)
		{
			x_1++;
			x_2++;
			x_3++;
			x_4++;
		}
		while (x_4 > 18)
		{
			x_1--;
			x_2--;
			x_3--;
			x_4--;
		}
	}
}Z_obraznay;

class Z_obraznay_rev {
public:
	//	int x = 0;
	int perekl = 0;
	int position(int i, int j) {

		if (y_1 == chek_1 - 1 || y_2 == chek_2 - 1 || y_3 == chek_3 - 1 || y_4 == chek_4 - 1)
		{
			if (perekl == 0)
			{
				for (int i = 0; i < 18; i++)
				{
					vector<int> temp;
					temp = vec_1[i + 1];
					for (int j = 0; j < 20; j++)
					{
						if (i == y_1 - 1)
						{
							if (j == (x_1))
							{
								temp[j] = 2;
							}
						}
						if (i == y_2 - 1)
						{
							if (j == (x_2))
							{
								temp[j] = 2;
							}
						}
						if (i == y_3 - 1)
						{
							if (j == (x_3))
							{
								temp[j] = 2;
							}
						}
						if (i == y_4 - 1)
						{
							if (j == (x_4))
							{
								temp[j] = 2;
							}
						}

					}
					vec_1[i + 1] = temp;
				}
				k--;
				perekl = 1;
			}
		}
		if (i == y_1)
		{
			if (j == (x_1 - 1))
			{
				return 2;
			}
		}
		if (i == y_2)
		{
			if (j == (x_2 - 1))
			{
				return 2;
			}
		}
		if (i == y_3)
		{
			if (j == (x_3 - 1))
			{
				return 2;
			}
		}
		if (i == y_4)
		{
			if (j == (x_4 - 1))
			{
				return 2;
			}
		}
		return 1;
	}
	void povorot() {
		if (polochenie == 3)
		{
			polochenie = 1;
		}
		else if (polochenie == 4)
		{
			polochenie = 2;
		}
		if (polochenie == 1)
		{
			y_1 = k - 1;
			y_2 = k - 1;
			y_3 = k;
			y_4 = k;
			x_1 = x_2 + 1;
			x_2 = x_2;
			x_3 = x_2;
			x_4 = x_2 - 1;
		}
		else if (polochenie == 2)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k;
			y_4 = k + 1;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 + 1;
			x_4 = x_2 + 1;
		}
		while (x_1 < 1)
		{
			x_1++;
			x_2++;
			x_3++;
			x_4++;
		}
		while (x_4 > 18)
		{
			x_1--;
			x_2--;
			x_3--;
			x_4--;
		}
	}
}Z_obraznay_rev;

class T_obraznay {
public:
	//	int x = 0;
	int perekl = 0;
	int position(int i, int j) {

		if (y_1 == chek_1 - 1 || y_2 == chek_2 - 1 || y_3 == chek_3 - 1 || y_4 == chek_4 - 1)
		{
			if (perekl == 0)
			{
				for (int i = 0; i < 18; i++)
				{
					vector<int> temp;
					temp = vec_1[i + 1];
					for (int j = 0; j < 20; j++)
					{
						if (i == y_1 - 1)
						{
							if (j == (x_1))
							{
								temp[j] = 2;
							}
						}
						if (i == y_2 - 1)
						{
							if (j == (x_2))
							{
								temp[j] = 2;
							}
						}
						if (i == y_3 - 1)
						{
							if (j == (x_3))
							{
								temp[j] = 2;
							}
						}
						if (i == y_4 - 1)
						{
							if (j == (x_4))
							{
								temp[j] = 2;
							}
						}

					}
					vec_1[i + 1] = temp;
				}
				k--;
				perekl = 1;
			}
		}
		if (i == y_1)
		{
			if (j == (x_1 - 1))
			{
				return 2;
			}
		}
		if (i == y_2)
		{
			if (j == (x_2 - 1))
			{
				return 2;
			}
		}
		if (i == y_3)
		{
			if (j == (x_3 - 1))
			{
				return 2;
			}
		}
		if (i == y_4)
		{
			if (j == (x_4 - 1))
			{
				return 2;
			}
		}
		return 1;
	}
	void povorot() {
		if (polochenie == 1)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k;
			y_4 = k;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2 + 1;
		}
		else if (polochenie == 2)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k;
			y_4 = k + 1;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 + 1;
			x_4 = x_2;
		}
		else if (polochenie == 3)
		{
			y_1 = k + 1;
			y_2 = k;
			y_3 = k;
			y_4 = k;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2 + 1;
		}
		else if (polochenie == 4)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k;
			y_4 = k + 1;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2;
		}
		while (x_1 < 1)
		{
			x_1++;
			x_2++;
			x_3++;
			x_4++;
		}
		while (x_4 > 18)
		{
			x_1--;
			x_2--;
			x_3--;
			x_4--;
		}
	}
}T_obraznay;

class L_obraznay_rev {
public:
	//	int x = 0;
	int perekl = 0;
	int position(int i, int j) {

		if (y_1 == chek_1 - 1 || y_2 == chek_2 - 1 || y_3 == chek_3 - 1 || y_4 == chek_4 - 1)
		{
			if (perekl == 0)
			{
				for (int i = 0; i < 18; i++)
				{
					vector<int> temp;
					temp = vec_1[i + 1];
					for (int j = 0; j < 20; j++)
					{
						if (i == y_1 - 1)
						{
							if (j == (x_1))
							{
								temp[j] = 2;
							}
						}
						if (i == y_2 - 1)
						{
							if (j == (x_2))
							{
								temp[j] = 2;
							}
						}
						if (i == y_3 - 1)
						{
							if (j == (x_3))
							{
								temp[j] = 2;
							}
						}
						if (i == y_4 - 1)
						{
							if (j == (x_4))
							{
								temp[j] = 2;
							}
						}

					}
					vec_1[i + 1] = temp;
				}
				k--;
				perekl = 1;
			}
		}
		if (i == y_1)
		{
			if (j == (x_1 - 1))
			{
				return 2;
			}
		}
		if (i == y_2)
		{
			if (j == (x_2 - 1))
			{
				return 2;
			}
		}
		if (i == y_3)
		{
			if (j == (x_3 - 1))
			{
				return 2;
			}
		}
		if (i == y_4)
		{
			if (j == (x_4 - 1))
			{
				return 2;
			}
		}
		return 1;
	}

	void povorot() {
		if (polochenie == 1)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k;
			y_4 = k;
			x_1 = x_2 - 1;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2 + 1;
		}
		else if (polochenie == 2)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k - 1;
			y_4 = k + 1;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 + 1;
			x_4 = x_2;
		}
		else if (polochenie == 3)
		{
			y_1 = k + 1;
			y_2 = k;
			y_3 = k;
			y_4 = k;
			x_1 = x_2 + 1;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2 + 1;
		}
		else if (polochenie == 4)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k + 1;
			y_4 = k + 1;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2;
		}
		while (x_1 < 1)
		{
			x_1++;
			x_2++;
			x_3++;
			x_4++;
		}
		while (x_4 > 18)
		{
			x_1--;
			x_2--;
			x_3--;
			x_4--;
		}
	}
}L_obraznay_rev;

class L_obraznay {
public:
	//	int x = 0;
	int perekl = 0;
	int position(int i, int j) {

		if (y_1 == chek_1 - 1 || y_2 == chek_2 - 1 || y_3 == chek_3 - 1 || y_4 == chek_4 - 1)
		{
			if (perekl == 0)
			{
				for (int i = 0; i < 18; i++)
				{
					vector<int> temp;
					temp = vec_1[i + 1];
					for (int j = 0; j < 20; j++)
					{
						if (i == y_1 - 1)
						{
							if (j == (x_1))
							{
								temp[j] = 2;
							}
						}
						if (i == y_2 - 1)
						{
							if (j == (x_2))
							{
								temp[j] = 2;
							}
						}
						if (i == y_3 - 1)
						{
							if (j == (x_3))
							{
								temp[j] = 2;
							}
						}
						if (i == y_4 - 1)
						{
							if (j == (x_4))
							{
								temp[j] = 2;
							}
						}

					}
					vec_1[i + 1] = temp;
				}
				k--;
				perekl = 1;
			}
		}
		if (i == y_1)
		{
			if (j == (x_1 - 1))
			{
				return 2;
			}
		}
		if (i == y_2)
		{
			if (j == (x_2 - 1))
			{
				return 2;
			}
		}
		if (i == y_3)
		{
			if (j == (x_3 - 1))
			{
				return 2;
			}
		}
		if (i == y_4)
		{
			if (j == (x_4 - 1))
			{
				return 2;
			}
		}
		return 1;
	}
	void povorot() {
		if (polochenie == 1)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k;
			y_4 = k;
			x_1 = x_2 + 1;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2 + 1;
		}
		else if (polochenie == 2)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k + 1;
			y_4 = k + 1;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2;
			x_4 = x_2 + 1;
		}
		else if (polochenie == 3)
		{
			y_1 = k + 1;
			y_2 = k;
			y_3 = k;
			y_4 = k;
			x_1 = x_2 - 1;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2 + 1;
		}
		else if (polochenie == 4)
		{
			y_1 = k - 1;
			y_2 = k;
			y_3 = k - 1;
			y_4 = k + 1;
			x_1 = x_2;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2;
		}
		while (x_1 < 1)
		{
			x_1++;
			x_2++;
			x_3++;
			x_4++;
		}
		while (x_4 > 18)
		{
			x_1--;
			x_2--;
			x_3--;
			x_4--;
		}
	}
}L_obraznay;

class Kvadrat {
public:
	//	int x = 0;
	int perekl = 0;
	int position(int i, int j) {

		if (y_1 == chek_1 - 1 || y_2 == chek_2 - 1 || y_3 == chek_3 - 1 || y_4 == chek_4 - 1)
		{
			if (perekl == 0)
			{
				for (int i = 0; i < 18; i++)
				{
					vector<int> temp;
					temp = vec_1[i + 1];
					for (int j = 0; j < 20; j++)
					{
						if (i == y_1 - 1)
						{
							if (j == (x_1))
							{
								temp[j] = 2;
							}
						}
						if (i == y_2 - 1)
						{
							if (j == (x_2))
							{
								temp[j] = 2;
							}
						}
						if (i == y_3 - 1)
						{
							if (j == (x_3))
							{
								temp[j] = 2;
							}
						}
						if (i == y_4 - 1)
						{
							if (j == (x_4))
							{
								temp[j] = 2;
							}
						}

					}
					vec_1[i + 1] = temp;
				}
				k--;
				perekl = 1;
			}
		}
		if (i == y_1)
		{
			if (j == (x_1 - 1))
			{
				return 2;
			}
		}
		if (i == y_2)
		{
			if (j == (x_2 - 1))
			{
				return 2;
			}
		}
		if (i == y_3)
		{
			if (j == (x_3 - 1))
			{
				return 2;
			}
		}
		if (i == y_4)
		{
			if (j == (x_4 - 1))
			{
				return 2;
			}
		}
		return 1;
	}
	void povorot() {
		polochenie = 1;
		if (polochenie == 1)
		{
			y_1 = k;
			y_2 = k;
			y_3 = k - 1;
			y_4 = k - 1;
			x_1 = x_2 - 1;
			x_2 = x_2;
			x_3 = x_2 - 1;
			x_4 = x_2;
		}
		while (x_1 < 1)
		{
			x_1++;
			x_2++;
			x_3++;
			x_4++;
		}
		while (x_4 > 18)
		{
			x_1--;
			x_2--;
			x_3--;
			x_4--;
		}
	}
}Kvadrat;

void otrisovka() {
	for (int i = 0; i < vec_1.size(); i++)
	{
		vector<int> temp;
		temp = vec_1[i];
		vector<int> temp_2;
		temp_2 = vec_2[i];
		for (int j = 0; j < temp.size(); j++)
		{
			if (temp_2[j] == 2)
			{
				SetConsoleTextAttribute(console, 2);
				cerr << "@";
			}
			else
			{
				if (temp[j] == 1)
				{
					SetConsoleTextAttribute(console, 2);
					cerr << " ";
				}
				else if (temp[j] == 2)
				{
					SetConsoleTextAttribute(console, color);
					cerr << "@";
				}
			}
		}
		cerr << endl;
	}
	cerr << endl << endl << endl << "Очки: " << ochki;
}

void chek_relef() {
	for (int i = 0; i < 20; i++)
	{
		vector<int> temp;
		temp = vec_1[i];
		for (int j = 0; j < 20; j++)
		{
			if (temp[j] == 2)
			{
				if (j == (x_1))
				{
					if (x_1_stop == 0)
					{
						chek_1 = i;
						x_1_stop = 1;
					}
				}
				if (j == (x_2))
				{
					if (x_2_stop == 0)
					{
						chek_2 = i;
						x_2_stop = 1;
					}
				}
				if (j == (x_3))
				{
					if (x_3_stop == 0)
					{
						chek_3 = i;
						x_3_stop = 1;
					}
				}
				if (j == (x_4))
				{
					if (x_4_stop == 0)
					{
						chek_4 = i;
						x_4_stop = 1;
					}
				}
			}
		}
	}
}

void move_obj() {
	while (true)
	{
		switch (_getch())
		{

		case 75:
			if (vec_1[y_1][x_1 - 1] == 1 && vec_1[y_2][x_2 - 1] == 1 && vec_1[y_3][x_3 - 1] == 1 && vec_1[y_4][x_4 - 1] == 1)
			{
				x_1--;
				x_2--;
				x_3--;
				x_4--;
				if (x_1 == 0 || x_2 == 0 || x_3 == 0 || x_4 == 0)
				{
					x_1++;
					x_2++;
					x_3++;
					x_4++;
				}
			}
			break;
		case 77:
			if (vec_1[y_1][x_1 + 1] == 1 && vec_1[y_2][x_2 + 1] == 1 && vec_1[y_3][x_3 + 1] == 1 && vec_1[y_4][x_4 + 1] == 1)
			{
				x_1++;
				x_2++;
				x_3++;
				x_4++;
				if (x_1 == 19 || x_2 == 19 || x_3 == 19 || x_4 == 19)
				{
					x_1--;
					x_2--;
					x_3--;
					x_4--;
				}
			}
			break;
		case 72:
			if (polochenie == 1)
			{
				polochenie = 2;
			}
			else if (polochenie == 2)
			{
				polochenie = 3;
			}
			else if (polochenie == 3)
			{
				polochenie = 4;
			}
			else if (polochenie == 4)
			{
				polochenie = 1;
			}
			break;
		}
	}
}

int chek_full_line() {
	vector<int> line;
	for (int i = 0; i < 20; i++)
	{
		if (i == 0 || i == 19)
		{
			line.push_back(1);
		}
		else
		{
			line.push_back(2);
		}
	}

	for (int i = vec_1.size() - 1; i >= 0; i--)
	{

		if (vec_1[i] == line)
		{
			return i;
		}
	}
	return -1;
}

int shift_down() {
	int num = chek_full_line();
	if (num >= 0)
	{
		ochki += 100;
		for (int i = 0; i < num - 1; i++)
		{
			vector<int> temp;
			temp = vec_1[num - i - 1];
			vec_1[num - i] = temp;
		}
		vector<int> chistay_liniy;
		for (int i = 0; i < 20; i++)
		{
			chistay_liniy.push_back(1);
		}
		//		vec_1[19] = chistay_liniy;
	}
	return 0;
}

void game_over() {
	if (chek_1 == 2 || chek_2 == 2 || chek_3 == 2 || chek_4 == 2)
	{
		system("ClS");
		SetConsoleTextAttribute(console, 2);
		int vibor;
		cout << "ВЫ ПРОИГРАЛИ." << endl << "1. НАЧАТЬ ЗАНОВО" << endl << "2. Выход" << endl;
		cin >> vibor;
		if (vibor == 1)
		{
			for (int i = 0; i < 20; i++)
			{
				vector<int> temp;
				vector<int> temp_2;
				temp_2 = vec_2[i];
				temp = vec_1[i];
				for (int j = 0; j < 20; j++)
				{
					if (i == 0)
					{
						temp_2[j] = 2;
					}
					else if (i == 19)
					{
						temp_2[j] = 2;
						temp[j] = 2;
					}
					else
					{
						if (j == 0)
						{
							temp_2[j] = 2;
						}
						else if (j == 19)
						{
							temp_2[j] = 2;
						}
						else
						{
							temp_2[j] = 1;
							temp[j] = 1;
						}
					}
				}
				vec_1[i] = temp;
				vec_2[i] = temp_2;
			}
		}
		else if (vibor == 2)
		{
			exit(1);
		}
	}
}

void pl_gen() {
	Palka.povorot();
	for (int i = 0; i < 18; i++)
	{
		vector<int> temp;
		temp = vec_2[i + 1];
		for (int j = 0; j < 18; j++)
		{
			temp[j + 1] = Palka.position(i, j);
		}
		vec_2[i + 1] = temp;
	}
}

void z_obraznay_gen() {
	Z_obraznay.povorot();
	for (int i = 0; i < 18; i++)
	{
		vector<int> temp;
		temp = vec_2[i + 1];
		for (int j = 0; j < 18; j++)
		{
			temp[j + 1] = Z_obraznay.position(i, j);
		}
		vec_2[i + 1] = temp;
	}
}

void z_obraznay_rev_gen() {
	Z_obraznay_rev.povorot();
	for (int i = 0; i < 18; i++)
	{
		vector<int> temp;
		temp = vec_2[i + 1];
		for (int j = 0; j < 18; j++)
		{
			temp[j + 1] = Z_obraznay_rev.position(i, j);
		}
		vec_2[i + 1] = temp;
	}
}

void t_obraznay_gen() {
	T_obraznay.povorot();
	for (int i = 0; i < 18; i++)
	{
		vector<int> temp;
		temp = vec_2[i + 1];
		for (int j = 0; j < 18; j++)
		{
			temp[j + 1] = T_obraznay.position(i, j);
		}
		vec_2[i + 1] = temp;
	}
}

void l_obraznay_gen() {
	L_obraznay.povorot();
	for (int i = 0; i < 18; i++)
	{
		vector<int> temp;
		temp = vec_2[i + 1];
		for (int j = 0; j < 18; j++)
		{
			temp[j + 1] = L_obraznay.position(i, j);
		}
		vec_2[i + 1] = temp;
	}
}

void l_obraznay_rev_gen() {
	L_obraznay_rev.povorot();
	for (int i = 0; i < 18; i++)
	{
		vector<int> temp;
		temp = vec_2[i + 1];
		for (int j = 0; j < 18; j++)
		{
			temp[j + 1] = L_obraznay_rev.position(i, j);
		}
		vec_2[i + 1] = temp;
	}
}

void kv_gen() {
	Kvadrat.povorot();
	for (int i = 0; i < 18; i++)
	{
		vector<int> temp;
		temp = vec_2[i + 1];
		for (int j = 0; j < 18; j++)
		{
			temp[j + 1] = Kvadrat.position(i, j);
		}
		vec_2[i + 1] = temp;
	}
}

void pole() {
	chek_relef();
	//	move(vec_2,vec_1);
	for (int i = 0; i < 18; i++)
	{
		vector<int> temp;
		for (int j = 0; j < 20; j++)
		{
			if (j == 0)
			{
				temp.push_back(2);
			}
			else if (j == 19)
			{
				temp.push_back(2);
			}
			else
			{
				temp.push_back(1);
			}
		}
		vec_2[i + 1] = temp;
	}
//	figura = 2;
	if (figura == 1)
	{
		kv_gen();
	}
	else if (figura == 2)
	{
		pl_gen();
	}
	else if (figura == 3)
	{
		z_obraznay_gen();
	}
	else if (figura == 4)
	{
		z_obraznay_rev_gen();
	}
	else if (figura == 5)
	{
		t_obraznay_gen();
	}
	else if (figura == 6)
	{
		l_obraznay_gen();
	}
	else if (figura == 7)
	{
		l_obraznay_rev_gen();
	}
	if (Palka.perekl == 1 || Kvadrat.perekl == 1 || Z_obraznay.perekl == 1 || Z_obraznay_rev.perekl == 1 || T_obraznay.perekl == 1 || L_obraznay.perekl == 1 || L_obraznay_rev.perekl == 1)
	{
		//		chek_full_line();
		game_over();
		shift_down();
		polochenie = 1;
		k = 0;
		Palka.perekl = 0;
		Kvadrat.perekl = 0;
		Z_obraznay.perekl = 0;
		Z_obraznay_rev.perekl = 0;
		T_obraznay.perekl = 0;
		L_obraznay.perekl = 0;
		L_obraznay_rev.perekl = 0;
		figura = (rand() % 7) + 1;
	}

	otrisovka();
	x_1_stop = 0;
	x_2_stop = 0;
	x_3_stop = 0;
	x_4_stop = 0;
}

void nach_gen() {

	for (int i = 0; i < 20; i++)
	{
		vector<int> temp;
		for (int j = 0; j < 20; j++)
		{
			if (i == 19)
			{
				temp.push_back(2);
			}
			else
			{
				temp.push_back(1);
			}
		}
		vec_1.push_back(temp);
	}
	for (int i = 0; i < 20; i++)
	{
		vector<int> temp_two;
		for (int j = 0; j < 20; j++)
		{
			if (i == 0)
			{
				temp_two.push_back(2);
			}
			else if (i == 19)
			{
				temp_two.push_back(2);
			}
			else
			{
				if (j == 0)
				{
					temp_two.push_back(2);
				}
				else if (j == 19)
				{
					temp_two.push_back(2);
				}
				else
				{
					temp_two.push_back(1);
				}
			}
		}
		vec_2.push_back(temp_two);
	}
}

int main_menu() {
	int vibor;
	for (int k = 0; k < 18; k++)
	{
		cout << "Вы запустили игру " << endl;
		cout << "--------   ||------   --------   ||---\\    ||       ----      " << endl;
		cout << "   ||      ||            ||      ||    |           //   \\     " << endl;
		cout << "   ||      ||------      ||      ||___/    ||     ||              " << endl;
		cout << "   ||      ||            ||      ||        ||     ||             " << endl;
		cout << "   ||      ||            ||      ||\\       ||      \\\\   /            " << endl;
		cout << "   ||      ||------      ||      || \\      ||       ----           " << endl << endl << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (i == 0)
				{
					cout << "@";
				}
				else if (i == 19)
				{
					cout << "@";
				}
				else
				{
					if (j == 0)
					{
						cout << "@";
					}
					else if (j == 19)
					{
						cout << "@";
					}
					else
					{
						if (i == k - 1)
						{
							if (j == 7)
							{
								cout << "@";
							}
							else
							{
								cout << " ";
							}
						}
						else if (i == k)
						{
							if (j == 6 || j == 7 || j == 8)
							{
								cout << "@";
							}
							else
							{
								cout << " ";
							}
						}
						else
						{
							cout << " ";
						}
					}
				}
			}
			cout << endl;
		}
		Sleep(200);
		system("ClS");
	}
	cout << "ГЛАВНОЕ МЕНЮ:" << endl;
	cout << "1. ЗАПУСТИТЬ ИГРУ" << endl;
	cout << "2. ВЫХОД" << endl;
	cin >> vibor;
	system("ClS");
	if (vibor == 2)
	{
		exit(1);
	}
	else if (vibor == 1)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << "Игра запускается |";
			Sleep(100);
			system("ClS");
			cout << "Игра запускается /";
			Sleep(100);
			system("ClS");
			cout << "Игра запускается -";
			Sleep(100);
			system("ClS");
			cout << "Игра запускается \\";
			Sleep(100);
			system("ClS");
		}
	}
	return 0;
}

int spend() {
	if (ochki < 1000)
	{
		return 1000;
	}
	else if (ochki >= 1000 && ochki <= 2000)
	{
		return 700;
	}
	else if (ochki >= 2000 && ochki <= 4000)
	{
		return 500;
	}
	else if (ochki >= 4000 && ochki <= 6000)
	{
		return 300;
	}
	else if (ochki >= 6000 && ochki <= 8000)
	{
		return 200;
	}
	else if (ochki >= 8000 && ochki <= 10000)
	{
		return 100;
	}
	else
	{
		return 0;
	}
}

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	nach_gen();
	main_menu();
	thread pl_move(move_obj);
	pl_move.detach();
	while (true)
	{
		pole();
		Sleep(120);
		k++;
		system("ClS");
	}
}