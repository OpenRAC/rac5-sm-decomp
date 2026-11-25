/* LEVEL_22:0x0B60F0 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern void func_10CB48(struct Obj *p);
extern void func_0248D8(int i);
extern int func_109980(int id);
extern void func_10CB98(struct S *p, int v);

void func_0B60F0(struct Obj *object)
{
    func_10CB48(object);
    func_0248D8(0xB);
    D_0015FF80 = func_109980(0xA80);
    D_0015FF84 = func_109980(0x30B);
    D_0015FF88 = func_109980(0x218);
    func_10CB98((struct S *)object, 0x18);
}
