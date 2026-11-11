/* LEVEL_07:0x1B5168 -- placement copy of LEVEL_01_1A2FC0.c: rebases the record's resource offset into a pointer and, when the debug flag is set, builds a bit mask of the occupied entries and passes it on. */
extern int D_0021B094;
extern unsigned char D_0020A46C;
extern int func_0189D0(int a, int b);

static __inline__ int Reloc(int *slot)
{
    int value = *slot;

    if (value == 0)
        return 0;
    *slot = D_0021B094 + value;
    return 1;
}

int func_1B5168(char *object)
{
    char *record = *(char **)(object + 0x54);
    unsigned int mask;
    unsigned int i;

    if (!Reloc((int *)(record + 0x20)))
        return 0;
    if (D_0020A46C != 0) {
        mask = 0;
        for (i = 0; i < 32; i++) {
            if (*(unsigned char *)(*(char **)(object + 0x54) + i) != 0)
                mask |= 1 << i;
        }
        func_0189D0(*(int *)(record + 0x20), mask);
    }
    return 1;
}
