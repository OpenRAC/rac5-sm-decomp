/* LEVEL_07:0x08ACB8 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_08AC78(char *record);
extern unsigned int func_08AC58(char *object);

int func_08ACB8(char *record)
{
    char *field;
    if (func_08AC78(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_08AC58(field);
    return 0;
}
