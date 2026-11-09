/* LEVEL_09:0x070FD0 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001DFEB4;
extern char D_002215A0[];

void func_070FD0(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001DFEB4 = 0;
    base = D_002215A0;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
