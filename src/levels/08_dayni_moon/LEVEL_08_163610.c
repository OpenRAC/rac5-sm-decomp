/* LEVEL_08:0x163610 -- placement copy of LEVEL_01_151190.c: clears a counted halfword list, rebuilds a 1023-entry nibble table, and resets counters. */
struct Gm {
    char pad_000[0x498];
    unsigned short *p_498;
    char pad_49c[0x1C98 - 0x49C];
    unsigned int w_1c98;
    int w_1c9c;
    int w_1ca0;
    int w_1ca4;
    int w_1ca8;
    char pad_1cac[0x1CDC - 0x1CAC];
    int w_1cdc;
    int w_1ce0;
    int w_1ce4;
    int w_1ce8;
};

extern struct Gm D_003E0EA8;

void func_163610(void)
{
    struct Gm *g;
    char *q;
    unsigned short *p;
    unsigned short *end;
    int i;
    int a0v;
    int a1v;

    p = D_003E0EA8.p_498;
    end = (unsigned short *)((char *)p + D_003E0EA8.w_1ca8 * 2);
    if (p != end) {
        do {
            *p = 0xFFF;
            p++;
        } while (p != end);
    }
    i = 0;
    do {
        q = (char *)&D_003E0EA8 + i * 6;
        *(unsigned short *)(q + 0x4A0) = (*(unsigned short *)(q + 0x4A0) & 0xF) | ((i + 1) << 4);
        i++;
    } while (i != 0x3FF);
    g = &D_003E0EA8;
    g->w_1c98 |= 0xFFF00000;
    a0v = g->w_1ca0 - 1;
    a1v = g->w_1ca4 - 1;
    g->w_1ce4 = a0v;
    g->w_1ce8 = a1v;
    g->w_1cdc = 0;
    g->w_1ce0 = 0;
    g->w_1c9c = 0;
}
