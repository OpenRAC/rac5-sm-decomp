/* LEVEL_20:0x057C80 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001061E4;
extern char D_00143D58[];

void func_057C80(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001061E4 = 0;
    base = D_00143D58;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
