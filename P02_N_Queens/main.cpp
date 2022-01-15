#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

unsigned long long columnOf[100000000];
                      ///   123456789

///* Algorithm : Backtracking */
///* Problem : N Queens */
///* Author : Mahmudul Hasan Khan CSE */

int Place(unsigned long long currentRow, unsigned long long currentColumn)
/// Return 1, if a Queen can be placed in currentRow-th row and
/// currentColumn-th column. Otherwise, it returns 0. columnOf[] is a
/// global array, whose first (currentRow-1) values have been set.
/// labs(r) returns the absolute value of r.
{
    for(unsigned long long row = 0; row < currentRow; row++)
    {
        if((columnOf[row] == currentColumn)
           /// Two Queens are in the same column
           || (labs(currentColumn - columnOf[row]) == (currentRow - row)))
            /// Or, in the same diagonal
           {
               return 0;
           }
    }
    return 1;
}

void NQueens(unsigned long long row, unsigned long long nSize)
/// Using backtracking, this procedure prints all
/// possible placements of nSize Queens on an nSize * nSize
/// chessboard, so that they are non-attacking
{
    for(unsigned long long column = 0; column < nSize; column++)
    {
        if(Place(row, column) == 1)
        {
            columnOf[row] = column;
            if(row == (nSize-1))
            {
                printf("\n\n\t[\t(%d,%llu)", 1, columnOf[0] + 1);
                for(unsigned long long r = 1; r < nSize; r++)
                {
                    printf(",\t(%llu,%llu)", r + 1, columnOf[r]+1);
                }
                printf("\t]");
            }
            else
            {
                NQueens(row + 1, nSize);
            }
        }
    }
}

int main()
{
    unsigned long long nSize;

    ///* Sample Input */
    /// nSize = 8

    char key = 'y';
    while(tolower(key) == 'y')
    {
        printf("\n\n\n\tFor n * n sized chessboard, Enter the number of Queens, n : ");
        scanf("%llu", &nSize);

        printf("\n\tAll possible combinations of %llu Queens are : ", nSize);
        NQueens(0, nSize);

        printf("\n\tDo you want to try more ? [y/n] : ");
        key = _getche();
    }

    return 0;
}
