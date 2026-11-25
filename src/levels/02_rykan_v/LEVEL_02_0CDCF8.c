/* LEVEL_02:0x0CDCF8 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern char D_00215BD0;

struct Obj {
    char pad00[0x10];
};

extern void func_13BA28(struct Obj *p);
extern int func_138860(int id);
extern void func_13BA78(struct Obj *p, int v);

void func_0CDCF8(struct Obj *o)
{
    func_13BA28(o);
    D_00215BC0 = func_138860(0xA85);
    D_00215BC4 = func_138860(0x30A);
    D_00215BC8 = func_138860(0x219);
    D_00215BD0 = 0;
    func_13BA78(o, 0x18);
}
