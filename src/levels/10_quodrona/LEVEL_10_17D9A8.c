/* LEVEL_10:0x17D9A8 -- placement copy of LEVEL_03_17B3F0.c: finds a list entry by key, then runs a callback on each flagged 0x80-byte record it owns. */
typedef struct { char pad00[0x64]; unsigned int flags; char pad68[0x18]; } Rec;
typedef struct { char pad00[0x0C]; Rec *recs; char pad10[0x14]; unsigned int id; char pad28[8]; unsigned int nrecs; char pad34[0x10]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_0020F9F0;
extern void func_17D6F0(Rec *r);

void func_17D9A8(void)
{
    Tab *t;
    Ent *e;
    Rec *r;
    Rec *end;
    unsigned int key;
    unsigned int i;

    key = 0x2A3547B7u;
    t = D_0020F9F0;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            e = &t->ents[i];
            goto found;
        }
    }
    e = 0;
found:
    r = e->recs;
    end = r + e->nrecs;
    while (r != end) {
        if (r->flags & 1) {
            func_17D6F0(r);
        }
        r++;
    }
}
