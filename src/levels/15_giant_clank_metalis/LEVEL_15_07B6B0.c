extern char D_001B030C[];

int *func_07B6B0(int index)
{
    char *record = D_001B030C + index * 0x28;
    return (int *)(record + 0x10);
}
