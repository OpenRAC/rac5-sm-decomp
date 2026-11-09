/* LEVEL_23:0x07EAA8 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_07EA68(char *record);
extern unsigned int func_07EA48(char *object);

int func_07EAA8(char *record)
{
    char *field;
    if (func_07EA68(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_07EA48(field);
    return 0;
}
