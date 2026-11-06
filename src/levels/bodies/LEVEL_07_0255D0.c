extern char *func_024C38(unsigned int, int);

int func_0255D0(unsigned int index)
{
    if (index < 25) {
        char *record = func_024C38(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
