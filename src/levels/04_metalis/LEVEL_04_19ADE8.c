/* LEVEL_04:0x19ADE8 -- prunes finished entries from a pool, counts the rest by kind and reports count changes. */
typedef struct Kind { char pad[0x24]; int tag; } Kind;
typedef struct Ent { char pad0[0x40]; Kind *kind; } Ent;
typedef struct EntHdr { char pad0[0x64]; unsigned flags; } EntHdr;
typedef struct Pool { EntHdr *e[24]; char pad60; unsigned char n; unsigned char b62; unsigned char b63; } Pool;
typedef struct Info { char pad[0x2C]; unsigned short cntA; unsigned short cntB; char pad30[0x10 - 4]; } Info;
typedef struct Obj { char pad[0x54]; Info *info; Pool *pool; } Obj;
extern void func_19AC50(Obj *o, Info *i, int b, int d);

void func_19ADE8(Obj *o)
{
    unsigned a = 0;
    unsigned i;
    unsigned b = 0;
    Pool *p = o->pool;
    Info *s = o->info;
    unsigned da;
    unsigned db;

    for (i = 0; i < p->n; i++) {
        EntHdr *h = p->e[i];

        if (h->flags & 6) {
            p->n--;
            p->e[i] = p->e[p->n];
            i--;
        } else if (((Ent *)h)->kind->tag == 0x66B80B74) {
            a++;
        } else {
            b++;
        }
    }
    da = s->cntA - a;
    if (da != 0)
        func_19AC50(o, s, p->b62, da);
    db = s->cntB - b;
    if (db != 0)
        func_19AC50(o, (Info *)((char *)s + 0x10), p->b63, db);
}
