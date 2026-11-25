/* LEVEL_08:0x0D2310 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern char D_00249AD0;

struct Obj {
    char pad00[0x10];
};

extern void func_146BB0(struct Obj *p);
extern int func_1439E8(int id);
extern void func_146C00(struct Obj *p, int v);

void func_0D2310(struct Obj *o)
{
    func_146BB0(o);
    D_00249AC0 = func_1439E8(0xA85);
    D_00249AC4 = func_1439E8(0x30A);
    D_00249AC8 = func_1439E8(0x219);
    D_00249AD0 = 0;
    func_146C00(o, 0x18);
}
