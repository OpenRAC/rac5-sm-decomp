/* LEVEL_08:0x0D2B68 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern void func_146BB0(struct Obj *p);
extern void func_02A8B8(int i);
extern int func_1439E8(int id);
extern void func_146C00(struct S *p, int v);

void func_0D2B68(struct Obj *object)
{
    func_146BB0(object);
    func_02A8B8(0xB);
    D_00249AC0 = func_1439E8(0xA80);
    D_00249AC4 = func_1439E8(0x30B);
    D_00249AC8 = func_1439E8(0x218);
    func_146C00((struct S *)object, 0x18);
}
