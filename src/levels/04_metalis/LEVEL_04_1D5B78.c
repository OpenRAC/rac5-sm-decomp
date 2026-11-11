/* LEVEL_04:0x1D5B78 -- sends a fixed message when the record's sub-object has a nonzero flag. */
extern char D_001D75F0[];
extern void func_0BB138(void *, void *, unsigned int, int, int);

void func_1D5B78(char *record)
{
    char *sub = *(char **)(record + 0x58);

    if (*(int *)(sub + 0x40) != 0)
        func_0BB138(D_001D75F0, record, 0xFFFFFFFFu, 3, 0x1d5);
}
