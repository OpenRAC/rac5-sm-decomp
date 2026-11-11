/* LEVEL_07:0x16C0F8 -- releases the handle stored at +0xE8 of the record's child block and clears it. */
extern void func_082CA0(int);
void func_16C0F8(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0xE8);
    if (value != 0) {
        func_082CA0(value);
        *(int *)(nested + 0xE8) = 0;
    }
}
