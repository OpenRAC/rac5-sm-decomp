/* LEVEL_04:0x033858 -- calls a helper for each non-null entry of two slots. */
extern void func_033708(void *a0, void *a1, void *a2, unsigned int i);

void func_033858(char *a0, void *a1, void *a2)
{
    unsigned int i;
    int *base;

    base = (int *)(*(char **)(a0 + 0x58) + 4);
    for (i = 0; i < 2; i++) {
        if (base[i] != 0) {
            func_033708(a0, a1, a2, i);
        }
    }
}
