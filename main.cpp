#include <iostream>
#include "Karnaugh_Map.h"

using namespace std;

/*
	Author- Nicholas Samaroo
	Completed on January 5,2019
	Description- This program will give you the numberings for a size 3 Karnaugh Map and
	map your specific 1's and d's onto a size 3 map if desired. It will also give you the numberings for size 4 and 5 maps
	making it easier to map the 1's and d's yourself.
*/

int main()
{
	int user_choice;
	
	cout << "PROGRAM INSTRUCTIONS\n";
	cout << "--------------------\n";
	cout << "Enter 1 for a SIZE 3 NUMBERED MAP\n";
	cout << "Enter 2 for a SIZE 3 map with your specific 1's and d's mapped onto it.\n";
	cout << "Enter 3 for a SIZE 4 NUMBERED MAP\n";
	cout << "Enter 4 for a SIZE 5 NUMBERED MAP\n";
	
	cin >> user_choice;
	cout << endl;
	
	switch(user_choice)
	{
		case 1:
		{
			Karnaugh_Map display_three_map;
			int row = 2;
			int column = 4; 
			display_three_map.display_map(row,column);
			break;
		}
		
		case 2:
		{
			Karnaugh_Map solver;
			int row = 2;
			int column = 4; 								
			int three_map_ones;
			int three_map_ds;
			
			cout << "How many ones are part of your problem?\n";
			
			cin >> three_map_ones;
			
			if(three_map_ones < 0 || three_map_ones > 8)
			{
				cout << "Your number of 1's must be inbetween 0 and 7 inclusive\n";
				break;
			}
			else if(three_map_ones == 0)
			{
				cout << "All positions on the map are replaced with d's\n";
				break;
			}
			else
			{
				char* ones = new char[three_map_ones];
			
				cout << "Please enter the ones associated with your problem.\n";
			
				for(int i = 0; i < three_map_ones;i++)
				{
					cin >> ones[i];
				}
			    bool one_status = true;
				one_status = solver.numones(ones,three_map_ones);
				
				if(one_status == false)
				{
					cout << "You have entered something other than a 1, please try again\n";
					break;
				}
				delete[] ones;
				ones = nullptr;
			}
			
			cout << "How many d's are associated with your problem?\n";
			cin >> three_map_ds;
			
			if((three_map_ds + three_map_ones) > 8)
			{
				cout << "The number of d's and 1's combined cannot exceed 8, try again\n";
				break;
			}
			else if((three_map_ds + three_map_ones) < 8)
			{
				cout << "The number of 1's and d's must add up to 8,as that is the maximum for a three variable k-map\n";
				break;
			}
			else if(three_map_ds == 0)
			{
				solver.display_map(row,column);
				cout << endl;
				break;
			}
			else
			{
				char* ds = new char[three_map_ds];
			
				cout << "Please enter the d's associated with your problem\n";
			
				for(int j = 0; j < three_map_ds;j++)
				{
					cin >> ds[j];
				}
			
				cout << endl;
				
				bool status = true;
				
				 status = solver.numds(ds,three_map_ds);
				
				if(status == false)
				{
					cout << "In one of your d positions there already exists a 1 or you have entered something other than a d, please verify your numbers and run the program again\n";
					break;
				}
				else
				{
					solver.display_map(row,column);
				}
				
				delete[] ds;
				ds = nullptr;
			}
			break;
			
		}
		
		case 3:
		{
			Karnaugh_Map display_four_map;
			int row = 4;
			int column = 4;
			display_four_map.display_map(row,column);
			break;
		}
		
		case 4:
		{
			Karnaugh_Map display_five_map;
			int row = 4;
			int column = 8;
			display_five_map.display_map(row,column);
			break;
		}	
		
		default:
			cout << "Please enter a valid number\n";
			break;
	}
	
}
