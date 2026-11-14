/* USA LEVEL_03.REL:0x179A40, 172-byte candidate (14 November 2026).
 * Measured pinned: 13 differing words; first difference at 36.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Rec44 {
    char pad_00[0xC];
    char *subs;
    char pad_10[0x14];
    int key;
    char pad_28[8];
    unsigned int count;
    char pad_34[0x10];
};

struct Gbl {
    char pad_00[0x34];
    struct Rec44 *items;
    unsigned int count;
};

extern struct Gbl *D_0021F410;
extern void func_1791D8(char *e);

void func_179A40(void)
{
    struct Gbl *g;
    struct Rec44 *q;
    char *s;
    char *end;
    unsigned int i;
    unsigned int key;

    key = 0x5E139936;
    g = D_0021F410;
    for (i = 0; i < g->count; i++) {
        if (g->items[i].key == key) {
            q = &g->items[i];
            goto found;
        }
    }
    q = 0;
found:
    end = q->subs + (q->count << 7);
    s = q->subs;
    while (s != end) {
        if (*(unsigned int *)(s + 0x64) & 1)
            func_1791D8(s);
        s += 0x80;
    }
}
