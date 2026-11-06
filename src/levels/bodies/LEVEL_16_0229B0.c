extern char *func_022110(unsigned int, int);

int func_0229B0(unsigned int index)
{
    if (index < 25) {
        char *record = func_022110(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
