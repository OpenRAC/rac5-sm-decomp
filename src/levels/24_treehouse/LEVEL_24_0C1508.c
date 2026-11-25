/* LEVEL_24:0x0C1508 -- placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern void func_12B178(struct Obj *p);
extern void func_027880(int i);
extern int func_127FB0(int id);
extern void func_12B1C8(struct S *p, int v);

void func_0C1508(struct Obj *object)
{
    func_12B178(object);
    func_027880(0xB);
    D_001D1880 = func_127FB0(0xA80);
    D_001D1884 = func_127FB0(0x30B);
    D_001D1888 = func_127FB0(0x218);
    func_12B1C8((struct S *)object, 0x18);
}
