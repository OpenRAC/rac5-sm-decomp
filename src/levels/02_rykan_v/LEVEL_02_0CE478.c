/* LEVEL_02:0x0CE478 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern unsigned char D_00215BD0;

extern void func_13BA28(struct Obj *p);
extern int func_138860(int a0);
extern void func_13BA78(struct S *p, int v);

void func_0CE478(struct Obj *o)
{
    func_13BA28(o);
    D_00215BC0 = func_138860(0xA5E);
    D_00215BC4 = func_138860(0x30A);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 1;
    func_13BA78((struct S *)o, 0x18);
}
