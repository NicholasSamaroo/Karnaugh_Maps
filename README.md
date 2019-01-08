Given a list of one's and d's(don't cares) for a Karnaugh Map this program maps your specfic input onto a size three map. It also gives the numberings for size three, four, and five maps You can then focus on grouping prime implicants. 

The following descibes the minterm representation on each map; when mapping ones and d's onto a Karnaugh map, you have your numbers which are then translated into minterms which are then mapped. This program does not visually display the specific minterm regions so follow the descriptions for each map.

When your ones are mapped, you can find prime implicants and minimize the function by recognizing where the one lies on the map.

FOR A SIZE THREE MAP: 6,7,4, and 5 is the 'x' region. 3,1,2, and 0 is the x' region. y is the first row and y' is the second row. 7,5,1, and 3 are z, and the first and last columns are z'.

FOR A SIZE FOUR MAP: 12, 14, 13, 15, 9, 11, 8, and 10 are x. 6, 4, 7, 5, 3, 1, 2, and 0 are x'. y is 12, 13, 14, 15, 6, 7, 4, and 5. y' is 9, 8, 11, 10, 3, 2, 1, and 0. z is composed of columns 2 and 3 while z' is the first and last columns. t' is the first and last rows while the middle portion(looking from a row perspective and not including the first and last rows) represent t.

FOR A SIZE FIVE MAP: x is the first two columns and the last two columns. x' is the middle portion not including x. y is the first two rows and y' is the last two rows.z' is comprised of the first column, the fourth and fifth columns, and the last column. z is comprised of the second and third columns and the sixth and seventh columns. t is the second and third rows t' is the first and last rows. For the last variable, let's call it f, spilt the map into two from the fourth and fifth columns. The right hand side is f' and the left hand side is f.
