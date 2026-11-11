/* LEVEL_16:0x1367F8 -- finds the table entry with a given id and runs a callback over its variable-size records. */
struct Rec {
    char pad[0x62];
    unsigned char extra;
    char pad2;
    struct { int a, b; } tail[1];
};
struct Ent {
    unsigned id;
    char pad4[0xC];
    struct Rec *recs;
    unsigned n;
};
struct Tbl {
    char pad[0x24];
    struct Ent *ents;
    unsigned n;
};
extern struct Tbl *D_001B48A0;
extern void func_076328(struct Rec *r);

void func_1367F8(void)
{
    struct Ent *e;
    struct Rec *r;
    struct Ent *p;
    unsigned i;
    unsigned j;

    e = 0;
    for (i = 0; i < D_001B48A0->n; i++) {
        p = &D_001B48A0->ents[i];
        if (p->id == 0xBB728CC7) {
            e = p;
            break;
        }
    }
    if (e != 0) {
        r = e->recs;
        for (j = 0; j < e->n; j++) {
            func_076328(r);
            r = (struct Rec *)&r->tail[r->extra];
        }
    }
}
