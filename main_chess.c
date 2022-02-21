#include <stdio.h>
#include <string.h>
#include <string.h>

#include "error.c"
#include "board.c"
#include "b_in_c.c"

int main()
{
    char pc1, pc2, f, d;
    int pi1, pi2;
    int pii1, pii2;
    int tmp;

    char c;

    char b[9][9] = {};

    board(b);

    int hod = 1;

error1:

    while ((c = getchar()) != 'x')
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                printf("%3c", b[i][j]);
            }
            printf("\n");
        }

        printf("%d ход\n", hod);
        scanf("%c", &f);
        if (f == 'x')
        {
            break;
        }

        scanf("%c", &pc1);
        scanf("%d", &pi1);
        scanf("%c", &d);
        scanf("%c", &pc2);
        scanf("%d", &pi2);
        // printf("%c %c %d %c %c %d\n", f, pc1, pi1, d, pc2, pi2);

        pii1 = b_in_c(pc1);
        pii2 = b_in_c(pc2);

        int test_error = error(pc1, pc2, f, d, pi1, pi2, pii1, pii2, b, hod);
        if (test_error == 1)
        {
            goto error1;
        }
        if (d == '-')
        {
            tmp = b[pi1 - 1][pii1];
            b[pi1 - 1][pii1] = b[pi2 - 1][pii2];
            b[pi2 - 1][pii2] = tmp;
        }

        if (d == 'x')
        {
            b[pi2 - 1][pii2] = b[pi1 - 1][pii1];
            b[pi1 - 1][pii1] = ' ';
        }

        int endtest = 0;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
                if ((b[i][j] == 'k') || (b[i][j] == 'K'))
                {
                    endtest++;
                }
        }
        if (endtest != 2)
        {
            printf("Партия завершена\n");
            break;
        }
        hod++;
    }
    return 0;
}