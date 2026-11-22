/* LEVEL_04:0x085CC8 -- placement copy of LEVEL_02_0890A8.c: per-frame update of an object: refreshes it, keeps its low flag across the generic update, runs the class hooks and, when the class step reports progress, bumps the class counter once and the global counter. */
struct Obj;

typedef struct {
    char pad00[0x24];
    void (*prepare)(struct Obj *o);
} Vtbl;

typedef struct {
    char pad00[0x10];
    Vtbl *vtbl;
    int (*step)(struct Obj *o);
    char pad18[0x40 - 0x18];
    unsigned short count;
} Class;

typedef struct {
    unsigned int b0 : 1;
    unsigned int rest : 31;
} Bits;

typedef struct Obj {
    char pad00[0x40];
    Class *cls;
    char pad44[0x64 - 0x44];
    int flags;
} Obj;

extern int D_0020F61C[1];

extern void func_07FAE8(Obj *o, int a);
extern void func_07FC48(Obj *o);
extern void func_018468(Obj *o);
extern void func_0840E8(Obj *o);

void func_085CC8(Obj *o)
{
    int keep;
    void (*prepare)(Obj *);

    func_07FAE8(o, 1);
    if ((o->flags & 6) != 0) {
        func_07FC48(o);
    }
    keep = o->flags & 1;
    func_018468(o);
    o->flags = (o->flags & -2) | keep;
    prepare = o->cls->vtbl->prepare;
    if (prepare != 0) {
        prepare(o);
    }
    func_0840E8(o);
    if (o->cls->step(o) != 0) {
        if (((Bits *)&o->flags)->b0 != 1) {
            if (o->cls != 0) {
                o->cls->count++;
            }
        }
        ((Bits *)&o->flags)->b0 = 1;
        D_0020F61C[0]++;
    }
}
