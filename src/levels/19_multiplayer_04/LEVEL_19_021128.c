/* LEVEL_19:0x021128 -- placement copy of LEVEL_01_023B38.c: returns a field of a looked-up record. */
extern char *func_021D50(int, int);
int func_021128(char *record)
{
    char *value;
    if (*(int *)(record + 0x9a0) == 0)
        return 0;
    value = func_021D50(*(int *)(record + 0x9a0), *(int *)(record + 0xf8));
    if (value != 0)
        return *(int *)(value + 0x24);
    return 0;
}
