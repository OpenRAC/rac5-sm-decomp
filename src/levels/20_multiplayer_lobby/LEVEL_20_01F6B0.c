extern char *func_01EE10(unsigned int, int);

int func_01F6B0(unsigned int index)
{
    if (index < 25) {
        char *record = func_01EE10(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
