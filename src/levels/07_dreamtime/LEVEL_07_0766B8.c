/* LEVEL_07:0x0766B8 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_0020A3B4;
extern char D_0024F720[];

void func_0766B8(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_0020A3B4 = 0;
    base = D_0024F720;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
