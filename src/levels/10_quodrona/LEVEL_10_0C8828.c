/* LEVEL_10:0x0C8828 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern char D_00209C10;

struct Obj {
    char pad00[0x10];
};

extern void func_1334F8(struct Obj *p);
extern int func_130310(int id);
extern void func_133548(struct Obj *p, int v);

void func_0C8828(struct Obj *o)
{
    func_1334F8(o);
    D_00209C00 = func_130310(0xA85);
    D_00209C04 = func_130310(0x30A);
    D_00209C08 = func_130310(0x219);
    D_00209C10 = 0;
    func_133548(o, 0x18);
}
