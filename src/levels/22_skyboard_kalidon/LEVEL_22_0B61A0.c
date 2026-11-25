/* LEVEL_22:0x0B61A0 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern char D_0015FF90;
extern void func_10CB48(struct Obj *p);
extern int func_109980(int id);
extern void func_10CB98(struct S *p, int v);

void func_0B61A0(struct Obj *obj)
{
    func_10CB48(obj);
    D_0015FF80 = func_109980(0xA5A);
    D_0015FF84 = func_109980(0x30B);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 1;
    func_10CB98((struct S *)obj, 0x18);
}
