/* LEVEL_16:0x0B68B0 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern void func_111D48(struct Obj *p);
extern void func_027D88(int i);
extern int func_10F330(int id);
extern void func_111D98(struct S *p, int v);

void func_0B68B0(struct Obj *object)
{
    func_111D48(object);
    func_027D88(0xB);
    D_001AEC78 = func_10F330(0xA80);
    D_001AEC7C = func_10F330(0x30B);
    D_001AEC80 = func_10F330(0x218);
    func_111D98((struct S *)object, 0x18);
}
