extern char *func_021D50(unsigned int, int);

int func_0225F0(unsigned int index)
{
    if (index < 25) {
        char *record = func_021D50(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
