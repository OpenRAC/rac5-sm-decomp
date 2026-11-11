/* LEVEL_05:0x086540 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_086500(char *record);
extern unsigned int func_0864E0(char *object);

int func_086540(char *record)
{
    char *field;
    if (func_086500(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_0864E0(field);
    return 0;
}
