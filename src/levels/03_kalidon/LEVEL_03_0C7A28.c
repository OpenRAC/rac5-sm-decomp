/* LEVEL_03:0x0C7A28 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern void func_133A40(struct Obj *p);
extern void func_02A138(int i);
extern int func_130878(int id);
extern void func_133A90(struct S *p, int v);

void func_0C7A28(struct Obj *object)
{
    func_133A40(object);
    func_02A138(0xB);
    D_00219280 = func_130878(0xA80);
    D_00219284 = func_130878(0x30B);
    D_00219288 = func_130878(0x218);
    func_133A90((struct S *)object, 0x18);
}
