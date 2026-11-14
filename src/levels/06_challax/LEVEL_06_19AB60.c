/* LEVEL_06:0x19AB60 -- releases the two attached resources of the record when set. */
extern void func_07A718(char *record);

void func_19AB60(char *object)
{
    char *record = *(char **)(object + 0x54);

    if (*(char **)(record + 0x34) != 0) {
        func_07A718(*(char **)(record + 0x34));
        *(int *)(record + 0x34) = 0;
    }
    if (*(char **)(record + 0x38) != 0) {
        func_07A718(*(char **)(record + 0x38));
        *(int *)(record + 0x38) = 0;
    }
}
