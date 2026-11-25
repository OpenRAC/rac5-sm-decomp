/* LEVEL_02:0x0CE600 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern char D_00215BD0;
extern void func_13BA28(struct Obj *p);
extern int func_138860(int id);
extern void func_13BA78(struct S *p, int v);

void func_0CE600(struct Obj *obj)
{
    func_13BA28(obj);
    D_00215BC0 = func_138860(0xA5A);
    D_00215BC4 = func_138860(0x30B);
    D_00215BC8 = func_138860(0x218);
    D_00215BD0 = 1;
    func_13BA78((struct S *)obj, 0x18);
}
