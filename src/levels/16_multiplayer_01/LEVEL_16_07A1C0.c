/* LEVEL_16:0x07A1C0 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_07A180(char *record);
extern unsigned int func_07A160(char *object);

int func_07A1C0(char *record)
{
    char *field;
    if (func_07A180(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_07A160(field);
    return 0;
}
