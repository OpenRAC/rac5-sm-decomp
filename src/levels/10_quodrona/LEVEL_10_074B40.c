/* LEVEL_10:0x074B40 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_001FF0B4;
extern char D_00243220[];

void func_074B40(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_001FF0B4 = 0;
    base = D_00243220;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
