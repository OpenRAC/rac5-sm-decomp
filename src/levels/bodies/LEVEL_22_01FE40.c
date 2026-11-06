extern char *func_01F4A8(unsigned int, int);

int func_01FE40(unsigned int index)
{
    if (index < 25) {
        char *record = func_01F4A8(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
