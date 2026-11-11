/* LEVEL_02:0x08F518 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_08F4D8(char *record);
extern unsigned int func_08F4B8(char *object);

int func_08F518(char *record)
{
    char *field;
    if (func_08F4D8(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_08F4B8(field);
    return 0;
}
