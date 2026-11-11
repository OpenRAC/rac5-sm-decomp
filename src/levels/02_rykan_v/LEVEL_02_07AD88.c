/* LEVEL_02:0x07AD88 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_0020B074;
extern char D_00251330[];

void func_07AD88(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_0020B074 = 0;
    base = D_00251330;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
