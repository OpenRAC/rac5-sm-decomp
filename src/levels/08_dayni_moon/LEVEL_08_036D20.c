/* LEVEL_08:0x036D20 -- placement copy of LEVEL_02_0367D0.c: walks eight pointer slots in a sub-block, releasing each one and clearing a global when it matches, then clears a flag byte. */

extern int *D_0023F258;

extern void func_09F8E0(int *address);

void func_036D20(char *a0)
{
    char *s2;
    int **s0;
    unsigned int i;

    s2 = *(char **)(a0 + 0x58);
    s0 = (int **)(s2 + 0x6C);
    i = 0;
    do {
        if (*s0 != 0) {
            if (*s0 == D_0023F258) {
                D_0023F258 = 0;
            } else {
                func_09F8E0(*s0);
            }
            *s0 = 0;
        }
        i++;
        s0++;
    } while (i < 8);
    *(unsigned char *)(s2 + 0xAD) = 0;
}
