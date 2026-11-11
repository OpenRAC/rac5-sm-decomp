extern char D_001B94F8[];

char *func_122D10(char *record)
{
    int row = *(int *)(record + 8);
    int column = *(int *)(record + 4);
    return D_001B94F8 + row * 0x60 + column * 0x20;
}
