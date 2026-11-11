/* LEVEL_17:0x020E68 -- placement copy of LEVEL_01_023B38.c: returns a field of a looked-up record. */
extern char *func_021A90(int, int);
int func_020E68(char *record)
{
    char *value;
    if (*(int *)(record + 0x9a0) == 0)
        return 0;
    value = func_021A90(*(int *)(record + 0x9a0), *(int *)(record + 0xf8));
    if (value != 0)
        return *(int *)(value + 0x24);
    return 0;
}
