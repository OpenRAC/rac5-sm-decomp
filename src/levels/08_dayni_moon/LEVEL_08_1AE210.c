/* LEVEL_08:0x1AE210 -- placement copy of LEVEL_04_1975F0.c: finds a keyed record in a global list, then runs a helper on each slot of its block whose key matches. */

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

extern struct Gbl *D_0024FC50;
extern void func_0845F8(char *p, int x);

void func_1AE210(int a0)
{
    struct Gbl *g;
    char *q;
    char *s0;
    char *end;
    unsigned int i;
    int key;

    key = (int)0xC0C773ED;
    g = D_0024FC50;
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
        if (*(int *)(*(char **)(s0 + 0x58)) == a0) {
            func_0845F8(s0, 1);
        }
        s0 += 0x80;
    }
}
