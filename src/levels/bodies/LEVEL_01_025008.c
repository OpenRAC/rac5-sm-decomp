extern char *func_024670(unsigned int, int);

int func_025008(unsigned int index)
{
    if (index < 25) {
        char *record = func_024670(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
