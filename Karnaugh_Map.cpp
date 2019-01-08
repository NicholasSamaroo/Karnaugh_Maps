#include <iostream>
#include "Karnaugh_Map.h"

using namespace std;

Karnaugh_Map::Karnaugh_Map(){}

bool Karnaugh_Map::numones(char a[], int size)
{
	for(int i = 0; i < size;i++)
	{
		
		if(a[i] == '0')
		{
			SIZE3MAP[1][3] = '1';
		}
		else if(a[i] == '1')
		{
			SIZE3MAP[1][2] = '1';
		}
		else if(a[i] == '2')
		{
			SIZE3MAP[0][3] = '1';
		}
		else if(a[i] == '3')
		{
			SIZE3MAP[0][2] = '1';
		}
		else if(a[i] == '4')
		{
			SIZE3MAP[1][0] = '1';
		}
		else if(a[i] == '5')
		{
			SIZE3MAP[1][1] = '1';
		}
		else if(a[i] == '6')
		{
			SIZE3MAP[0][0] = '1';
		}
		else if(a[i] == '7')
		{
			SIZE3MAP[0][1] = '1';
		}
		else
		{
			return false; // If this array somehow holds something other than a 1 it return false
		}
	}
	return true;
}

bool Karnaugh_Map::numds(char d[], int size)
{
	for(int i = 0;i < size;i++)
	{
		if(d[i] == '0')
		{
			if(SIZE3MAP[1][3] == '1')
			{
				return false;
			}
			SIZE3MAP[1][3] = 'd';
		}
		else if(d[i] == '1')
		{
			SIZE3MAP[1][2] = 'd';
		}
		else if(d[i] == '2')
		{
			if(SIZE3MAP[0][3] == '1')
			{
				return false;
			}
			SIZE3MAP[0][3] = 'd';
		}
		else if(d[i] == '3')
		{
			if(SIZE3MAP[0][2] == '1')
			{
				return false;
			}
			SIZE3MAP[0][2] = 'd';
		}
		else if(d[i] == '4')
		{
			if(SIZE3MAP[1][0] == '1')
			{
				return false;
			}
			SIZE3MAP[1][0] = 'd';
		}
		else if(d[i] == '5')
		{
			if(d[i] == '1')
			{
				return false;
			}
			SIZE3MAP[1][1] = 'd';
		}
		else if(d[i] == '6')
		{
			if(SIZE3MAP[0][0] == '1')
			{
				return false;
			}
			SIZE3MAP[0][0] = 'd';
		}
		else if (d[i] == '7')
		{
			if(SIZE3MAP[0][1] == '1')
			{
				return false;
			}
			SIZE3MAP[0][1] = 'd';
		}
		else
		{
			return false; // If the array somehow manages to hold something other than a d it returns false
		}
	}
	return true;
	
}

void Karnaugh_Map::display_map(int row, int column)
{
	cout << "NOW DISPLAYING YOUR MAP\n\n";
	
	if(row == 4 && column == 4)
	{
		for(int i = 0; i < row;i++)
		{
			for(int j = 0; j < column; j++)
			{
				cout << SIZE4_MAP[i][j] << "\t";
			}
		cout << endl;
		
		}
	}
	else if(row == 2 && column == 4)
	{
		for(int i = 0; i < row;i++)
		{
			for(int j = 0; j < column; j++)
			{
				cout << SIZE3MAP[i][j] << "\t";
			}
		cout << endl;
		
		}
	}
	else
	{
		for(int i = 0; i < row;i++)
		{
			for(int j = 0; j < column; j++)
			{
				cout << SIZE5_MAP[i][j] << "\t";
			}
		cout << endl;
		
		}
	}
}
