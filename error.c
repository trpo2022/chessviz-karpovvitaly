int error(char pc1, char pc2, char f, char d, int pi1, int pi2, int pii1, int pii2, char b[9][9], int hod)
{
    if ((hod % 2) == 1)
    {
        if ((f != 'P') && (f != 'R') && (f != 'N') && (f != 'B') && (f != 'Q') && (f != 'K'))
        {
            printf("сейчас ход белых\n");
            return 1;
        }
    }
    if ((hod % 2) == 0)
    {
        if ((f != 'p') && (f != 'r') && (f != 'n') && (f != 'b') && (f != 'q') && (f != 'k'))
        {
            printf("сейчас ход белых\n");
            return 1;
        }
    }

    if ((pi1 < 1) || (pi1 > 8) || (pi2 < 1) || (pi2 > 8) || (pii1 < 1) || (pii1 > 8) || (pii2 < 1) || (pii2 > 8))
    {
        printf("ошибка в написании координаты фигуры\n");
        return 1;
    }

    if (b[pi1 - 1][pii1] != f)
    {
        printf("неправильно написана фигура или клетка пуста\n");
        return 1;
    }

    if (d == '-')
    {
        if (f == 'k')
        {
            if ((((pi2 - pi1) > 1) || ((pi2 - pi1) < -1)) && (((pi2 - pi1) > 1) || ((pi2 - pi1) < -1)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'K')
        {
            if ((((pi2 - pi1) > 1) || ((pi2 - pi1) < -1)) && (((pi2 - pi1) > 1) || ((pi2 - pi1) < -1)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'q')
        {
            if (((pii2 - pii1) != (pi2 - pi1)) && ((pc1 != pc2) && (pi1 != pi2)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'Q')
        {
            if (((pii2 - pii1) != (pi2 - pi1)) && ((pc1 != pc2) && (pi1 != pi2)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'b')
        {
            if ((pii2 - pii1) != (pi2 - pi1))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'B')
        {
            if ((pii2 - pii1) != (pi2 - pi1))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'r')
        {
            if ((pc1 != pc2) && (pi1 != pi2))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'n')
        {
            if (((pii2 != pii1 + 2) || (pi2 != pi1 + 1)) && ((pii2 != pii1 + 2) || (pi2 != pi1 - 1)) && ((pii2 != pii1 - 2) || (pi2 != pi1 + 1)) && ((pii2 != pii1 - 2) || (pi2 != pi1 - 1)) && ((pii2 != pii1 + 1) || (pi2 != pi1 + 2)) && ((pii2 != pii1 + 1) || (pi2 != pi1 - 2)) && ((pii2 != pii1 - 1) || (pi2 != pi1 + 2)) && ((pii2 != pii1 - 1) || (pi2 != pi1 - 2)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'N')
        {
            if (((pii2 != pii1 + 2) || (pi2 != pi1 + 1)) && ((pii2 != pii1 + 2) || (pi2 != pi1 - 1)) && ((pii2 != pii1 - 2) || (pi2 != pi1 + 1)) && ((pii2 != pii1 - 2) || (pi2 != pi1 - 1)) && ((pii2 != pii1 + 1) || (pi2 != pi1 + 2)) && ((pii2 != pii1 + 1) || (pi2 != pi1 - 2)) && ((pii2 != pii1 - 1) || (pi2 != pi1 + 2)) && ((pii2 != pii1 - 1) || (pi2 != pi1 - 2)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (b[pi2 - 1][pii2] != ' ')
        {
            printf("Эта клетка не пустая\n");
            return 1;
        }

        if (f == 'p')
        {
            if (pc1 != pc2)
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
            if (pi1 == 2)
            {
                if ((pi2 != 3) && (pi2 != 4))
                {
                    printf("Неправильный ход фигуры\n");
                    return 1;
                    ;
                }
            }
            if ((pi1 != 2) && (pi2 != pi1 + 1))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'P')
        {
            if (pc1 != pc2)
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
            if (pi1 == 7)
            {
                if ((pi2 != 6) && (pi2 != 5))
                {
                    printf("Неправильный ход фигуры\n");
                    return 1;
                    ;
                }
            }
            if ((pi1 != 7) && (pi2 != pi1 - 1))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }
    }

    if (d == 'x')
    {
        if ((f == 'p') || (f == 'r') || (f == 'n') || (f == 'b') || (f == 'q') || (f == 'k'))
        {
            if ((b[pi2 - 1][pii2] != 'P') && (b[pi2-1][pii2] != 'R') && (b[pi2-1][pii2] != 'N') && (b[pi2-1][pii2] != 'B') && (b[pi2-1][pii2] != 'Q') && (b[pi2-1][pii2] != 'K'))
                {
                    printf("Нельзя рубить свои фигуры\n");
                    return 1;
                }
        }

        if ((f == 'P') || (f == 'R') || (f == 'N') || (f == 'B') || (f == 'Q') || (f == 'K'))
        {
            if ((b[pi2 - 1][pii2] != 'p') && (b[pi2-1][pii2] != 'r') && (b[pi2-1][pii2] != 'n') && (b[pi2-1][pii2] != 'b') && (b[pi2-1][pii2] != 'q') && (b[pi2-1][pii2] != 'k'))
                {
                    printf("Нельзя рубить свои фигуры\n");
                    return 1;
                }
        }

        if (f == 'k')
        {
            if ((((pi2 - pi1) > 1) || ((pi2 - pi1) < -1)) && (((pi2 - pi1) > 1) || ((pi2 - pi1) < -1)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'K')
        {
            if ((((pi2 - pi1) > 1) || ((pi2 - pi1) < -1)) && (((pi2 - pi1) > 1) || ((pi2 - pi1) < -1)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'q')
        {
            if (((pii2 - pii1) != (pi2 - pi1)) && ((pc1 != pc2) && (pi1 != pi2)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'Q')
        {
            if (((pii2 - pii1) != (pi2 - pi1)) && ((pc1 != pc2) && (pi1 != pi2)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'b')
        {
            if ((pii2 - pii1) != (pi2 - pi1))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'B')
        {
            if ((pii2 - pii1) != (pi2 - pi1))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'r')
        {
            if ((pc1 != pc2) && (pi1 != pi2))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'n')
        {
            if (((pii2 != pii1 + 2) || (pi2 != pi1 + 1)) && ((pii2 != pii1 + 2) || (pi2 != pi1 - 1)) && ((pii2 != pii1 - 2) || (pi2 != pi1 + 1)) && ((pii2 != pii1 - 2) || (pi2 != pi1 - 1)) && ((pii2 != pii1 + 1) || (pi2 != pi1 + 2)) && ((pii2 != pii1 + 1) || (pi2 != pi1 - 2)) && ((pii2 != pii1 - 1) || (pi2 != pi1 + 2)) && ((pii2 != pii1 - 1) || (pi2 != pi1 - 2)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'N')
        {
            if (((pii2 != pii1 + 2) || (pi2 != pi1 + 1)) && ((pii2 != pii1 + 2) || (pi2 != pi1 - 1)) && ((pii2 != pii1 - 2) || (pi2 != pi1 + 1)) && ((pii2 != pii1 - 2) || (pi2 != pi1 - 1)) && ((pii2 != pii1 + 1) || (pi2 != pi1 + 2)) && ((pii2 != pii1 + 1) || (pi2 != pi1 - 2)) && ((pii2 != pii1 - 1) || (pi2 != pi1 + 2)) && ((pii2 != pii1 - 1) || (pi2 != pi1 - 2)))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'p')
        {
            if ((pi2 - pi1) != 1)
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
            if (((pii2 - pii1) != 1) && ((pii2 - pii1) != -1))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }

        if (f == 'P')
        {
            if ((pi2 - pi1) != -1)
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
            if (((pii2 - pii1) != 1) && ((pii2 - pii1) != -1))
            {
                printf("Неправильный ход фигуры\n");
                return 1;
            }
        }
    }

    return 0;
}