/* LEVEL_23:0x06E1C0 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001C94B4;
extern char D_002072A0[];

void func_06E1C0(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001C94B4 = 0;
    base = D_002072A0;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
