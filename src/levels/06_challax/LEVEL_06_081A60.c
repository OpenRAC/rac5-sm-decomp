/* LEVEL_06:0x081A60 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_081A20(char *record);
extern unsigned int func_081A00(char *object);

int func_081A60(char *record)
{
    char *field;
    if (func_081A20(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_081A00(field);
    return 0;
}
