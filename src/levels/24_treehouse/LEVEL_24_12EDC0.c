/* LEVEL_24:0x12EDC0 -- placement copy of LEVEL_03_1376F0.c: finds the table entry whose key matches the fixed id and runs the release step on every flagged item of that entry. */
typedef struct Item { char pad00[0x64]; unsigned int w64; char pad68[0x18]; } Item;
typedef struct Ent { char pad00[0xC]; Item *items; char pad10[0x14]; unsigned int key; char pad28[8]; unsigned int cnt; char pad34[0x10]; } Ent;
typedef struct Glob { char pad00[0x34]; Ent *tab; unsigned int n; } Glob;
extern Glob *D_001D7A10;
extern void func_076D68(Item *it, int a);
void func_12EDC0(void)
{
    Glob *g = D_001D7A10;
    Ent *e;
    Ent *p;
    unsigned int i;
    unsigned int j;
    unsigned int key;
    Item *it;
    key = 0x462E4E09;
    for (i = 0; i < g->n; i++) {
        p = &g->tab[i];
        if (p->key == key) { e = p; goto found; }
    }
    e = 0;
found:
    it = e->items;
    for (j = 0; j < e->cnt; j++) {
        if (it->w64 & 1) func_076D68(it, 1);
        it++;
    }
}
