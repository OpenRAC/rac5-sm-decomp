/* LEVEL_21:0x0A8288 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern void func_0F4540(struct Obj *p);
extern void func_023B18(int i);
extern int func_0F1378(int id);
extern void func_0F4590(struct S *p, int v);

void func_0A8288(struct Obj *object)
{
    func_0F4540(object);
    func_023B18(0xB);
    D_00155880 = func_0F1378(0xA80);
    D_00155884 = func_0F1378(0x30B);
    D_00155888 = func_0F1378(0x218);
    func_0F4590((struct S *)object, 0x18);
}
