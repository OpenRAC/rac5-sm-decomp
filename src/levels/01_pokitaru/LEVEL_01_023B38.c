/* LEVEL_01:0x023B38 -- returns a field of a looked-up record. */
extern char *func_024670(int, int);
int func_023B38(char *record)
{
    char *value;
    if (*(int *)(record + 0x9a0) == 0)
        return 0;
    value = func_024670(*(int *)(record + 0x9a0), *(int *)(record + 0xf8));
    if (value != 0)
        return *(int *)(value + 0x24);
    return 0;
}
