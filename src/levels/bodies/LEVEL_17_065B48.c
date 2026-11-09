/* LEVEL_17:0x065B48 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_00197104;
extern char D_001DD7F0[];

void func_065B48(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_00197104 = 0;
    base = D_001DD7F0;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
