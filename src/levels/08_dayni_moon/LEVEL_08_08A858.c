/* LEVEL_08:0x08A858 -- placement copy of LEVEL_02_0890A8.c: per-frame update of an object: refreshes it, keeps its low flag across the generic update, runs the class hooks and, when the class step reports progress, bumps the class counter once and the global counter. */
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

extern int D_0023F01C[1];

extern void func_0845F8(Obj *o, int a);
extern void func_084758(Obj *o);
extern void func_0190C0(Obj *o);
extern void func_088C78(Obj *o);

void func_08A858(Obj *o)
{
    int keep;
    void (*prepare)(Obj *);

    func_0845F8(o, 1);
    if ((o->flags & 6) != 0) {
        func_084758(o);
    }
    keep = o->flags & 1;
    func_0190C0(o);
    o->flags = (o->flags & -2) | keep;
    prepare = o->cls->vtbl->prepare;
    if (prepare != 0) {
        prepare(o);
    }
    func_088C78(o);
    if (o->cls->step(o) != 0) {
        if (((Bits *)&o->flags)->b0 != 1) {
            if (o->cls != 0) {
                o->cls->count++;
            }
        }
        ((Bits *)&o->flags)->b0 = 1;
        D_0023F01C[0]++;
    }
}
