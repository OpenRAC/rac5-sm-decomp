/* LEVEL_02:0x0CEE38 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern char D_00215BD0;

struct Obj;
extern void func_13BA28(struct Obj *p);
extern int func_138860(int id);
extern void func_13BA78(struct Obj *p, int v);

void func_0CEE38(struct Obj *o)
{
    func_13BA28(o);
    D_00215BC0 = func_138860(0xA8A);
    D_00215BC4 = func_138860(0x327);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 0;
    func_13BA78(o, 0x18);
}
