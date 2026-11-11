/* LEVEL_24:0x1910F0 -- placement copy of LEVEL_19_177968.c: dispatches by a table entry flag when the owner's object has the expected tag. */
typedef struct { float f; int i; unsigned char flag; char pad[3]; } Ent;
typedef struct { char pad[0x24]; int tag; } Tagged;
typedef struct { char pad[0x40]; Tagged *t; } Holder;
typedef struct { char pad[0xF8]; int k; char pad2[0x110 - 0xFC]; Ent e[1]; } Owner;
typedef struct { char pad[0x40]; int idx; } Idx;
typedef struct { char pad[0x5A4]; Holder *h; } Pl;
typedef struct { char pad[0x58]; Owner *o; } Obj;
extern Idx *func_022400(int n, int k);
extern void func_18FF58(Holder *h, int i, float f, int x, int y);
extern void func_190228(Holder *h, int i, float f, int x, int y);

void func_1910F0(Obj *obj, int x, int y)
{
    Owner *o;
    Pl *p;
    Holder *q;
    Holder *h;
    int n;

    o = obj->o;
    p = *(Pl **)o;
    if (p != 0) {
        q = p->h;
        h = 0;
        if (q != 0) {
            if (q->t->tag == 0x63670C2B) {
                h = q;
            }
        }
        if (h != 0) {
            n = func_022400(12, ((Owner *)p)->k)->idx;
            if (o->e[n].flag) {
                func_18FF58(h, o->e[n].i, o->e[n].f, x, y);
            } else {
                func_190228(h, o->e[n].i, o->e[n].f, x, y);
            }
        }
    }
}
