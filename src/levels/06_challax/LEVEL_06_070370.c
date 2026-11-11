/* LEVEL_06:0x070370 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001E4FB4;
extern char D_00226BA0[];

void func_070370(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001E4FB4 = 0;
    base = D_00226BA0;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
