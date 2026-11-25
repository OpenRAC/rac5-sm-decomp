/* LEVEL_02:0x0CE550 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern void func_13BA28(struct Obj *p);
extern void func_02AB08(int i);
extern int func_138860(int id);
extern void func_13BA78(struct S *p, int v);

void func_0CE550(struct Obj *object)
{
    func_13BA28(object);
    func_02AB08(0xB);
    D_00215BC0 = func_138860(0xA80);
    D_00215BC4 = func_138860(0x30B);
    D_00215BC8 = func_138860(0x218);
    func_13BA78((struct S *)object, 0x18);
}
