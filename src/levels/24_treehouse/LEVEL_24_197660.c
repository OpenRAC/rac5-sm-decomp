/* LEVEL_24:0x197660 -- placement copy of LEVEL_04_1C8A38.c: finds matching objects and clears a flag on their linked object. */
typedef struct { char pad0[0x20]; int id; } Ent;
typedef struct { char pad0[4]; char *ents; } Tab;
typedef struct { char pad0[0x40]; Tab *tab; unsigned char idx; } Obj;
typedef struct { char pad0[0x64]; int flags; } Lnk;
extern unsigned func_01A9D8(Obj **buf, int cnt, int a, int b, int c, int d, int e);
extern int func_196738(Obj *o);
extern void func_1922A8(Lnk *l);

void func_197660(int a)
{
    Obj *buf[0x20];
    unsigned n;
    unsigned i;
    Obj *o;
    Lnk *l;

    n = func_01A9D8(buf, 0x20, a, 0x89, 0x81, 0x10, 0);
    if (n == 0)
        return;
    for (i = 0; i < n; i++) {
        o = buf[i];
        if (((Ent *)(o->tab->ents + o->idx * 0x34))->id == (int)0xF3066045) {
            l = (Lnk *)func_196738(o);
            if (l) {
                l->flags &= ~0x10;
                func_1922A8(l);
            }
        }
    }
}
