/* LEVEL_24:0x06E4C0 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001C6D34;
extern char D_00205D20[];

void func_06E4C0(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001C6D34 = 0;
    base = D_00205D20;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
