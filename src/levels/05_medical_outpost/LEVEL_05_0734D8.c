/* LEVEL_05:0x0734D8 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001E5434;
extern char D_00225B20[];

void func_0734D8(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001E5434 = 0;
    base = D_00225B20;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
