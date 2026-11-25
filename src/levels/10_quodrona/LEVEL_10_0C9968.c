/* LEVEL_10:0x0C9968 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern char D_00209C10;

struct Obj;
extern void func_1334F8(struct Obj *p);
extern int func_130310(int id);
extern void func_133548(struct Obj *p, int v);

void func_0C9968(struct Obj *o)
{
    func_1334F8(o);
    D_00209C00 = func_130310(0xA8A);
    D_00209C04 = func_130310(0x327);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 0;
    func_133548(o, 0x18);
}
