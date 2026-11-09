/* LEVEL_04:0x08BEF0 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_08BEB0(char *record);
extern unsigned int func_08BE90(char *object);

int func_08BEF0(char *record)
{
    char *field;
    if (func_08BEB0(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_08BE90(field);
    return 0;
}
