extern char *func_024FD0(unsigned int, int);

int func_025968(unsigned int index)
{
    if (index < 25) {
        char *record = func_024FD0(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
