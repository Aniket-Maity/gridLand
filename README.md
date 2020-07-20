Problem Statement
The city of Gridland is represented as an  matrix M x N where the rows are numbered from 1 to M and the columns are numbered from  1 to N



Gridland has a network of train tracks that always run in straight horizontal lines along a row. In other words, the start and end points of a train track are (r, c1) and (r, c2) , where r represents the row number,  c1 represents the starting column, and c2 represents the ending column of the train track..



The mayor of Gridland is surveying the city to determine the number of locations where lampposts can be placed. A lamppost can be placed in any cell that is not occupied by a train track.



Given a map of Gridland and its  k train tracks, find and print the number of cells where the mayor can place lampposts.



For example



Suppose there are three tracks in 4 x 4  matrix. First Track (2 2 3) says that  the track is in 2nd row starting at 2nd column and ending at 3rd column. Similarly, the other tracks are (3 1 4) and  (4 4 4) 

The inputs can be represented as follows

3 4 4
2 2 3
3 1 4
4 4 4
Basically, this inputs generates a map of Gridland like following



image



where red cells are vacant, first rail track is represented by yellow, and the other two are green and blue.

Hence 9 lampposts (shown as red cell)  can be placed.,

Extra Info
A train track may overlap other train tracks within the same row.

Input Format
First line contains three space separated integers representing k, M and N.

This line is followed by k number of lines, each having three space separated integers representing r, C1 and C2

Output Format
Integer representing the number of lamppost

Constraints
k < 10 ^3

M < 10^2

N <10 ^2

1 <= r <=M

1 <= c1, c2 <=N

Time Limit
2s.
Each test case should pass in 2s.
Sample Input
4 4 3 
2 2 3 
3 1 4 
4 4 4
Sample Output
9