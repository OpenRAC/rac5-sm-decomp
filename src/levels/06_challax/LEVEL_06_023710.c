extern char *func_022D78(unsigned int, int);

int func_023710(unsigned int index)
{
    if (index < 25) {
        char *record = func_022D78(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
