extern char *func_023FD8(unsigned int, int);

int func_024970(unsigned int index)
{
    if (index < 25) {
        char *record = func_023FD8(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
