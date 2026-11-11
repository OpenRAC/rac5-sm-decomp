/* LEVEL_23:0x021CE0 -- placement copy of LEVEL_01_023B38.c: returns a field of a looked-up record. */
extern char *func_022710(int, int);
int func_021CE0(char *record)
{
    char *value;
    if (*(int *)(record + 0x9a0) == 0)
        return 0;
    value = func_022710(*(int *)(record + 0x9a0), *(int *)(record + 0xf8));
    if (value != 0)
        return *(int *)(value + 0x24);
    return 0;
}
