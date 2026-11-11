/* LEVEL_08:0x1FAAF8 -- placement copy of LEVEL_04_1D5B78.c: sends a fixed message when the record's sub-object has a nonzero flag. */
extern char D_001FC570[];
extern void func_0C0820(void *, void *, unsigned int, int, int);

void func_1FAAF8(char *record)
{
    char *sub = *(char **)(record + 0x58);

    if (*(int *)(sub + 0x40) != 0)
        func_0C0820(D_001FC570, record, 0xFFFFFFFFu, 3, 0x1d5);
}
