/* LEVEL_20:0x01E308 -- placement copy of LEVEL_01_023B38.c: returns a field of a looked-up record. */
extern char *func_01EE10(int, int);
int func_01E308(char *record)
{
    char *value;
    if (*(int *)(record + 0x9a0) == 0)
        return 0;
    value = func_01EE10(*(int *)(record + 0x9a0), *(int *)(record + 0xf8));
    if (value != 0)
        return *(int *)(value + 0x24);
    return 0;
}
