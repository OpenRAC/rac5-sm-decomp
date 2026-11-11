/* LEVEL_04:0x1C78B8 -- for six words in the object's list, calls a helper with each nonzero word and a data address, then clears that word. */
extern void func_074828(int a0, char *a1);
extern char D_002225F8[];

void func_1C78B8(char *a0)
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
            func_074828(v, D_002225F8);
            *s0 = 0;
        }
        s0 = s0 + 1;
    } while (i < 6);
}
