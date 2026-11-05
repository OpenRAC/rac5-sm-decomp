extern char D_001AB678[];

char *func_123680(char *record)
{
    int row = *(int *)(record + 8);
    int column = *(int *)(record + 4);
    return D_001AB678 + row * 0x60 + column * 0x20;
}
