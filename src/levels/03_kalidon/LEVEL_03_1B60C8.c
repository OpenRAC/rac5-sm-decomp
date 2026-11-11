/* LEVEL_03:0x1B60C8 -- placement copy of LEVEL_01_1A2FC0.c: rebases the record's resource offset into a pointer and, when the debug flag is set, builds a bit mask of the occupied entries and passes it on. */
extern int D_0021F414;
extern unsigned char D_0020E7EC;
extern int func_018070(int a, int b);

static __inline__ int Reloc(int *slot)
{
    int value = *slot;

    if (value == 0)
        return 0;
    *slot = D_0021F414 + value;
    return 1;
}

int func_1B60C8(char *object)
{
    char *record = *(char **)(object + 0x54);
    unsigned int mask;
    unsigned int i;

    if (!Reloc((int *)(record + 0x20)))
        return 0;
    if (D_0020E7EC != 0) {
        mask = 0;
        for (i = 0; i < 32; i++) {
            if (*(unsigned char *)(*(char **)(object + 0x54) + i) != 0)
                mask |= 1 << i;
        }
        func_018070(*(int *)(record + 0x20), mask);
    }
    return 1;
}
