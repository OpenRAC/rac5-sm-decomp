/* LEVEL_01:0x088BE8 -- calls a guard, then a helper with a record field when it is set. */
extern int func_088BA8(char *record);
extern unsigned int func_088B88(char *object);

int func_088BE8(char *record)
{
    char *field;
    if (func_088BA8(record) != 0)
        return 0;
    field = *(char **)(record + 0x14);
    if (field != 0)
        return func_088B88(field);
    return 0;
}
