extern char D_001B91F8[];

char *func_1245C0(char *record)
{
    int row = *(int *)(record + 8);
    int column = *(int *)(record + 4);
    return D_001B91F8 + row * 0x60 + column * 0x20;
}
