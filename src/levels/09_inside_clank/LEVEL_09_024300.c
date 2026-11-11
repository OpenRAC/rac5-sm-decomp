extern char *func_023968(unsigned int, int);

int func_024300(unsigned int index)
{
    if (index < 25) {
        char *record = func_023968(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
