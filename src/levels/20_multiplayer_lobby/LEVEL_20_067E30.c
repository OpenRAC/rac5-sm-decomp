/* LEVEL_20:0x067E30 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_067DF0(char *record);
extern unsigned int func_067DD0(char *object);

int func_067E30(char *record)
{
    char *field;
    if (func_067DF0(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_067DD0(field);
    return 0;
}
