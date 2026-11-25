/* LEVEL_02:0x0CED88 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_13BA28(struct Obj *p);
extern int func_138860(int key);
extern void func_13BA78(struct S *p, int v);
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern unsigned char D_00215BD0;

void func_0CED88(struct Obj *o)
{
    func_13BA28(o);
    D_00215BC0 = func_138860(0xA87);
    D_00215BC4 = func_138860(0x327);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 0;
    func_13BA78((struct S *)o, 0x18);
}
