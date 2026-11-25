/* LEVEL_08:0x0D2C18 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern char D_00249AD0;
extern void func_146BB0(struct Obj *p);
extern int func_1439E8(int id);
extern void func_146C00(struct S *p, int v);

void func_0D2C18(struct Obj *obj)
{
    func_146BB0(obj);
    D_00249AC0 = func_1439E8(0xA5A);
    D_00249AC4 = func_1439E8(0x30B);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 1;
    func_146C00((struct S *)obj, 0x18);
}
