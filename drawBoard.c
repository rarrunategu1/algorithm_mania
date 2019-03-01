#include <cs50.h>
#include <stdio.h>

void drawBoard(int, int);

int main(void)
{
    printf("Hello World\n");

    drawBoard(6,6);
}

void drawBoard(int x, int y)
{
    char row  = '|';
    char column[3] = {'-', '+'};
    int i = 0;
    int j = 0;

    //COLUMN
    for(j = 0; j < y * 2; j++)
    {
        printf("\n");

        //ROW
        for(i = 0; i < x; i++)
        {
            if (j % 2 == 0)
            {
                putchar(' ');
                putchar(row);
            }
            if ( j % 2 == 1)
            {
                printf("%s", column);

            }

        }
    }
    printf("\n");
}