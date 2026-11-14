/* LEVEL_09:0x1AD5F0 -- placement copy of LEVEL_01_1C70D0.c: finds a keyed record in a global list, then runs a helper on each slot of its block whose flag bit is set. */

struct Rec44 {
    char pad_00[0x24];
    int key;
    char pad_28[0x1C];
};

struct Gbl {
    char pad_00[0x34];
    struct Rec44 *items;
    unsigned int count;
};

extern struct Gbl *D_001F0890;
extern void func_1AD6A8(char *p);

void func_1AD5F0(void)
{
    struct Gbl *g;
    char *q;
    char *s0;
    char *end;
    unsigned int i;
    int key;

    key = (int)0x9707D8E6;
    g = D_001F0890;
    for (i = 0; i < g->count; i++) {
        if (g->items[i].key == key) {
            q = (char *)&g->items[i];
            goto found;
        }
    }
    q = 0;
found:
    if (q == 0) {
        return;
    }
    end = *(char **)(q + 0xC) + (*(int *)(q + 0x30) << 7);
    s0 = *(char **)(q + 0xC);
    while (s0 != end) {
        if (*(int *)(s0 + 0x64) & 1) {
            func_1AD6A8(s0);
        }
        s0 += 0x80;
    }
}
