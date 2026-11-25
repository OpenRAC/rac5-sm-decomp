/* LEVEL_23:0x0BE9E0 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern void func_126DF0(struct Obj *p);
extern void func_027EB0(int i);
extern int func_123C28(int id);
extern void func_126E40(struct S *p, int v);

void func_0BE9E0(struct Obj *object)
{
    func_126DF0(object);
    func_027EB0(0xB);
    D_001D4000 = func_123C28(0xA80);
    D_001D4004 = func_123C28(0x30B);
    D_001D4008 = func_123C28(0x218);
    func_126E40((struct S *)object, 0x18);
}
