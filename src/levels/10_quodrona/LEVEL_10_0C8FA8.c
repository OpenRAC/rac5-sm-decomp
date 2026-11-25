/* LEVEL_10:0x0C8FA8 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern unsigned char D_00209C10;

extern void func_1334F8(struct Obj *p);
extern int func_130310(int a0);
extern void func_133548(struct S *p, int v);

void func_0C8FA8(struct Obj *o)
{
    func_1334F8(o);
    D_00209C00 = func_130310(0xA5E);
    D_00209C04 = func_130310(0x30A);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 1;
    func_133548((struct S *)o, 0x18);
}
