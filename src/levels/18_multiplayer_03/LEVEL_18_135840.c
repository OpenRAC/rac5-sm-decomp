/* LEVEL_18:0x135840 -- placement copy of LEVEL_16_1367F8.c: finds the table entry with a given id and runs a callback over its variable-size records. */
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
extern struct Tbl *D_001B5D20;
extern void func_075998(struct Rec *r);

void func_135840(void)
{
    struct Ent *e;
    struct Rec *r;
    struct Ent *p;
    unsigned i;
    unsigned j;

    e = 0;
    for (i = 0; i < D_001B5D20->n; i++) {
        p = &D_001B5D20->ents[i];
        if (p->id == 0xBB728CC7) {
            e = p;
            break;
        }
    }
    if (e != 0) {
        r = e->recs;
        for (j = 0; j < e->n; j++) {
            func_075998(r);
            r = (struct Rec *)&r->tail[r->extra];
        }
    }
}
