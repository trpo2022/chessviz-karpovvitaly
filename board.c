void board(char b[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            b[i][j] = ' ';
    }

    int x = 8;
    for (int i = 7; i > -1; i--)
    {
        b[i][0] = x + '0';
        x--;
    }
    b[8][1] = 'a';
    b[8][2] = 'b';
    b[8][3] = 'c';
    b[8][4] = 'd';
    b[8][5] = 'e';
    b[8][6] = 'f';
    b[8][7] = 'g';
    b[8][8] = 'h';
    for (int i = 8; i > 0; i--)
    {
        b[1][i] = 'p';
        x--;
    }
    for (int i = 8; i > 0; i--)
    {
        b[6][i] = 'P';
        x--;
    }
    b[0][1] = 'r';
    b[0][2] = 'n';
    b[0][3] = 'b';
    b[0][4] = 'q';
    b[0][5] = 'k';
    b[0][6] = 'b';
    b[0][7] = 'n';
    b[0][8] = 'r';
    b[7][1] = 'R';
    b[7][2] = 'N';
    b[7][3] = 'B';
    b[7][4] = 'Q';
    b[7][5] = 'K';
    b[7][6] = 'B';
    b[7][7] = 'N';
    b[7][8] = 'R';
}