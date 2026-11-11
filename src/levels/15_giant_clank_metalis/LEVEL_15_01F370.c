extern char *func_01E9D8(unsigned int, int);

int func_01F370(unsigned int index)
{
    if (index < 25) {
        char *record = func_01E9D8(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
