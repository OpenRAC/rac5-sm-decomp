/* LEVEL_15:0x06D2C8 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_06D288(char *record);
extern unsigned int func_06D268(char *object);

int func_06D2C8(char *record)
{
    char *field;
    if (func_06D288(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_06D268(field);
    return 0;
}
