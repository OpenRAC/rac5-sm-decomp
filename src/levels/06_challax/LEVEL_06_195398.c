/* LEVEL_06:0x195398 -- placement copy of LEVEL_01_1A2FC0.c: rebases the record's resource offset into a pointer and, when the debug flag is set, builds a bit mask of the occupied entries and passes it on. */
extern int D_001F5994;
extern unsigned char D_001E506C;
extern int func_016B10(int a, int b);

static __inline__ int Reloc(int *slot)
{
    int value = *slot;

    if (value == 0)
        return 0;
    *slot = D_001F5994 + value;
    return 1;
}

int func_195398(char *object)
{
    char *record = *(char **)(object + 0x54);
    unsigned int mask;
    unsigned int i;

    if (!Reloc((int *)(record + 0x20)))
        return 0;
    if (D_001E506C != 0) {
        mask = 0;
        for (i = 0; i < 32; i++) {
            if (*(unsigned char *)(*(char **)(object + 0x54) + i) != 0)
                mask |= 1 << i;
        }
        func_016B10(*(int *)(record + 0x20), mask);
    }
    return 1;
}
