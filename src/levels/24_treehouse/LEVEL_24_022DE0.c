extern char *func_022448(unsigned int, int);

int func_022DE0(unsigned int index)
{
    if (index < 25) {
        char *record = func_022448(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
