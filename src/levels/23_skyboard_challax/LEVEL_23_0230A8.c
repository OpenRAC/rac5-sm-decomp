extern char *func_022710(unsigned int, int);

int func_0230A8(unsigned int index)
{
    if (index < 25) {
        char *record = func_022710(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
