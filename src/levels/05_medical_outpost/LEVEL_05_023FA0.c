extern char *func_023608(unsigned int, int);

int func_023FA0(unsigned int index)
{
    if (index < 25) {
        char *record = func_023608(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
