/* USA LEVEL_03.REL:0x1376F0, 180-byte candidate (14 November 2026).
 * Measured pinned: 5 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Item { char pad00[0x64]; unsigned int w64; char pad68[0x18]; } Item;
typedef struct Ent { char pad00[0xC]; Item *items; char pad10[0x14]; unsigned int key; char pad28[8]; unsigned int cnt; char pad34[0x10]; } Ent;
typedef struct Glob { char pad00[0x34]; Ent *tab; unsigned int n; } Glob;
extern Glob *D_0021F410;
extern void func_07C468(Item *it, int a);
void func_1376F0(void)
{
    Glob *g = D_0021F410;
    Ent *e;
    Ent *p;
    unsigned int i;
    unsigned int j;
    unsigned int key;
    Item *it;
    key = 0x462E4E09;
    p = g->tab;
    for (i = 0; i < g->n; i++) {
        if (p->key == key) { e = p; goto found; }
        p++;
    }
    e = 0;
found:
    it = e->items;
    for (j = 0; j < e->cnt; j++) {
        if (it->w64 & 1) func_07C468(it, 1);
        it++;
    }
}
