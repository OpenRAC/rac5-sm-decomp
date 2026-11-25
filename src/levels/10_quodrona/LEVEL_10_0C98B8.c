/* LEVEL_10:0x0C98B8 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_1334F8(struct Obj *p);
extern int func_130310(int key);
extern void func_133548(struct S *p, int v);
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern unsigned char D_00209C10;

void func_0C98B8(struct Obj *o)
{
    func_1334F8(o);
    D_00209C00 = func_130310(0xA87);
    D_00209C04 = func_130310(0x327);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 0;
    func_133548((struct S *)o, 0x18);
}
