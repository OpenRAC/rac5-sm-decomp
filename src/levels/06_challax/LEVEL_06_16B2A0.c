/* LEVEL_06:0x16B2A0 -- placement copy of LEVEL_03_17B318.c: finds a list entry by key, then runs the handler on each flagged 0x80-byte record it owns whose bounds pass the test against the two given values. */
typedef struct { char pad00[0x30]; char box[0x34]; unsigned int flags; char pad68[0x18]; } Rec;
typedef struct { char pad00[0x0C]; Rec *recs; char pad10[0x14]; unsigned int id; char pad28[8]; unsigned int nrecs; char pad34[0x10]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_001F5990;
extern int func_1114F0(char *box, int a, int b);
extern void func_16B058(Rec *r);

void func_16B2A0(int a, int b)
{
    Tab *t;
    Ent *e;
    Rec *r;
    Rec *end;
    unsigned int key;
    unsigned int i;

    key = 0x2A3547B7u;
    t = D_001F5990;
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
            if (func_1114F0(r->box, a, b) != 0)
                func_16B058(r);
        }
        r++;
    }
}
