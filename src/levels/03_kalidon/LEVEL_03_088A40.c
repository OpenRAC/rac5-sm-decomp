/* LEVEL_03:0x088A40 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_088A00(char *record);
extern unsigned int func_0889E0(char *object);

int func_088A40(char *record)
{
    char *field;
    if (func_088A00(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_0889E0(field);
    return 0;
}
