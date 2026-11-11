extern char D_0011A738[];

char *func_0F5D58(char *record)
{
    int row = *(int *)(record + 8);
    int column = *(int *)(record + 4);
    return D_0011A738 + row * 0x60 + column * 0x20;
}
