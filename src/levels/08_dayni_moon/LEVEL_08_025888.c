extern char *func_024EF0(unsigned int, int);

int func_025888(unsigned int index)
{
    if (index < 25) {
        char *record = func_024EF0(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
