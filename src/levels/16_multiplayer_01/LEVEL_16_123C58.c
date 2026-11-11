extern char D_001B8078[];

char *func_123C58(char *record)
{
    int row = *(int *)(record + 8);
    int column = *(int *)(record + 4);
    return D_001B8078 + row * 0x60 + column * 0x20;
}
