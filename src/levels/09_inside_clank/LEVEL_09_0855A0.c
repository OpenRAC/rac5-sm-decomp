/* LEVEL_09:0x0855A0 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_085560(char *record);
extern unsigned int func_085540(char *object);

int func_0855A0(char *record)
{
    char *field;
    if (func_085560(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_085540(field);
    return 0;
}
