/* LEVEL_03:0x0C7AD8 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern char D_00219290;
extern void func_133A40(struct Obj *p);
extern int func_130878(int id);
extern void func_133A90(struct S *p, int v);

void func_0C7AD8(struct Obj *obj)
{
    func_133A40(obj);
    D_00219280 = func_130878(0xA5A);
    D_00219284 = func_130878(0x30B);
    D_00219288 = func_130878(0x218);
    D_00219290 = 1;
    func_133A90((struct S *)obj, 0x18);
}
