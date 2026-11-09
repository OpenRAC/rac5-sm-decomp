/* LEVEL_01:0x0744A0 -- clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001F60B4;
extern char D_00239E20[];

void func_0744A0(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001F60B4 = 0;
    base = D_00239E20;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
