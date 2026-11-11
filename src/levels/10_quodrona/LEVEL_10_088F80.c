/* LEVEL_10:0x088F80 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_088F10(char *record);
extern unsigned int func_088EF0(char *object);

int func_088F80(char *record)
{
    char *field;
    if (func_088F10(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_088EF0(field);
    return 0;
}
