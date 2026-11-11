/* LEVEL_08:0x090D50 -- placement copy of LEVEL_01_088BE8.c: calls a guard, then a helper with a record field when it is set. */
extern int func_090D10(char *record);
extern unsigned int func_090CF0(char *object);

int func_090D50(char *record)
{
    char *field;
    if (func_090D10(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_090CF0(field);
    return 0;
}
