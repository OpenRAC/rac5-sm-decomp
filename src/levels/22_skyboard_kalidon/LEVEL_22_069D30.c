/* LEVEL_22:0x069D30 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_00155434;
extern char D_0018BA20[];

void func_069D30(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_00155434 = 0;
    base = D_0018BA20;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
