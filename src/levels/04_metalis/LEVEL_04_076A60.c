/* LEVEL_04:0x076A60 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_0020F574;
extern char D_00254630[];

void func_076A60(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_0020F574 = 0;
    base = D_00254630;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
