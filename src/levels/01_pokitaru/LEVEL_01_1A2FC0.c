/* LEVEL_01:0x1A2FC0 -- rebases the record's resource offset into a pointer and, when the debug flag is set, builds a bit mask of the occupied entries and passes it on. */
extern int D_00206D94;
extern unsigned char D_001F616C;
extern int func_0182C0(int a, int b);

static __inline__ int Reloc(int *slot)
{
    int value = *slot;

    if (value == 0)
        return 0;
    *slot = D_00206D94 + value;
    return 1;
}

int func_1A2FC0(char *object)
{
    char *record = *(char **)(object + 0x54);
    unsigned int mask;
    unsigned int i;

    if (!Reloc((int *)(record + 0x20)))
        return 0;
    if (D_001F616C != 0) {
        mask = 0;
        for (i = 0; i < 32; i++) {
            if (*(unsigned char *)(*(char **)(object + 0x54) + i) != 0)
                mask |= 1 << i;
        }
        func_0182C0(*(int *)(record + 0x20), mask);
    }
    return 1;
}
