/* LEVEL_24:0x1964E0 -- placement copy of LEVEL_04_1C78B8.c: for six words in the object's list, calls a helper with each nonzero word and a data address, then clears that word. */
extern void func_06C288(int a0, char *a1);
extern char D_001D9D78[];

void func_1964E0(char *a0)
{
    int *s0;
    unsigned int i;
    int v;

    i = 0;
    s0 = (int *)(*(char **)(a0 + 0x58) + 0x44);
    do {
        v = *s0;
        i = i + 1;
        if (v != 0) {
            func_06C288(v, D_001D9D78);
            *s0 = 0;
        }
        s0 = s0 + 1;
    } while (i < 6);
}
