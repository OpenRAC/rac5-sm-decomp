extern char D_002E754C[];

int *func_09F7B8(int index)
{
    char *record = D_002E754C + index * 0x28;
    return (int *)(record + 0x10);
}
