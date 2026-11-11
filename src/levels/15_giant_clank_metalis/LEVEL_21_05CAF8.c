/* LEVEL_21:0x05CAF8 -- placement copy of LEVEL_01_0744A0.c: clears a global flag, then zeroes the first word of 16 nine-word rows. */
extern int D_0014AD34;
extern char D_00181E88[];

void func_05CAF8(void)
{
    unsigned int i;
    int *entry;
    char *base;
    D_0014AD34 = 0;
    base = D_00181E88;
    entry = (int *)(base + 0x20);
    i = 0;
    do {
        *entry = 0;
        i++;
        entry = (int *)((char *)entry + 0x24);
    } while (i < 16);
}
