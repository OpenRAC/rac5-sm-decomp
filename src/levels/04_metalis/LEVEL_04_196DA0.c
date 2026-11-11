/* LEVEL_04:0x196DA0 -- releases the record's attached resource when one is set. */
extern void func_06FFE0(char *record);
extern void func_06FAA8(char *object);

void func_196DA0(char *object)
{
    char *record = *(char **)(object + 0x58);

    if (*(char **)(record + 0xC) != 0) {
        func_06FFE0(*(char **)(record + 0xC));
        func_06FAA8(*(char **)(record + 0xC));
    }
}
