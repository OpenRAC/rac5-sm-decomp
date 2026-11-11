/* LEVEL_19:0x07A6A8 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_07A668(char *record);
extern unsigned int func_07A648(char *object);

int func_07A6A8(char *record)
{
    char *field;
    if (func_07A668(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_07A648(field);
    return 0;
}
