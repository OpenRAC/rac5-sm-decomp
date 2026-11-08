int func_08EF98(char *object, int column, int row)
{
    char *table;
    int width;
    int height;

    if (object == 0)
        return 0;
    table = *(char **)(object + 0xc);
    if (table == 0)
        return 0;
    width = *(unsigned short *)(table + 0x2a);
    height = *(unsigned short *)(table + 0x2e);
    if (column < 0 || column >= width)
        return 0;
    row %= height;
    if (row < 0)
        row += height;
    return *(int *)(table + *(int *)(table + 0x18) +
                    4 * (width * row + column));
}
