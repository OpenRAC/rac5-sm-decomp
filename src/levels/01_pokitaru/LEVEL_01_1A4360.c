/* LEVEL_01:0x1A4360 -- releases the two attached resources of the record when set. */
extern void func_080B38(char *record);
extern void func_0F0980(char *object);

void func_1A4360(char *object)
{
    char *record = *(char **)(object + 0x58);

    if (*(char **)(record + 0x1C) != 0) {
        func_080B38(*(char **)(record + 0x1C));
        *(int *)(record + 0x1C) = 0;
    }
    if (*(char **)(record + 0x30) != 0) {
        func_0F0980(*(char **)(record + 0x30));
        *(int *)(record + 0x30) = 0;
    }
}
