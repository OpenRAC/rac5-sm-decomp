/* LEVEL_18:0x064BD8 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001A4F84;
extern char D_001EC870[];

void func_064BD8(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001A4F84 = 0;
    base = D_001EC870;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
