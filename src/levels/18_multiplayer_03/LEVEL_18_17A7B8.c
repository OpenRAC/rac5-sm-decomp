/* LEVEL_18:0x17A7B8 -- turns two stored table offsets into pointers (the first cleared when its entry has no data), then runs the helper on the table. */
extern char *D_001B5D24;

typedef struct Table {
    char pad00[0x2C];
    int a;
    int b;
} Table;

typedef struct Obj {
    char pad00[0x54];
    Table *table;
} Obj;

extern void func_02CD30(Table *t);

void func_17A7B8(Obj *o)
{
    Table *t;
    int off;
    char *entry;

    t = o->table;
    off = t->a;
    if (off != 0) {
        entry = D_001B5D24 + off;
        if (*(int *)(entry + 0x40) == 0) {
            t->a = 0;
        } else {
            t->a = (int)entry;
        }
    }
    off = t->b;
    if (off != 0) {
        t->b = (int)(D_001B5D24 + off);
    }
    func_02CD30(t);
}
