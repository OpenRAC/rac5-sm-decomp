/* LEVEL_18:0x079B40 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_079B00(char *record);
extern unsigned int func_079AE0(char *object);

int func_079B40(char *record)
{
    char *field;
    if (func_079B00(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_079AE0(field);
    return 0;
}
