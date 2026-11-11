extern char *func_021A90(unsigned int, int);

int func_022330(unsigned int index)
{
    if (index < 25) {
        char *record = func_021A90(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
