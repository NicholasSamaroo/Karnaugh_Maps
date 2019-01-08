#ifndef Karnaugh_Map_H
#define Karnaugh_Map_H


class Karnaugh_Map
{
	private:
			char SIZE3MAP[2][4] = 
			{
				{'6', '7', '3', '2'},
				{'4', '5', '1', '0'}
			};
			
			int SIZE4_MAP[4][4] =
			{
				{12, 14, 6, 4},
				{13, 15, 7, 5},
				{9, 11, 3,1},
				{8, 10, 2, 0}
			};
			
			int SIZE5_MAP[4][8] =
			{
				{25, 29, 13, 9, 8, 12, 28, 24},
				{27, 31, 15, 11, 10, 14, 30, 26},
				{19, 23, 7, 3, 2, 6, 22, 16},
				{17, 21, 5, 1, 0, 4, 20, 16}
			};
		
		public:
			Karnaugh_Map();
			bool numones(char a [], int size);
			bool numds(char d[], int size);
			void display_map(int row, int column);
};
#endif
