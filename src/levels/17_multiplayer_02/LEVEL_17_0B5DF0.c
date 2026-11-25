/* LEVEL_17:0x0B5DF0 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern void func_1112C0(struct Obj *p);
extern void func_027708(int i);
extern int func_10E8A8(int id);
extern void func_111310(struct S *p, int v);

void func_0B5DF0(struct Obj *object)
{
    func_1112C0(object);
    func_027708(0xB);
    D_001A2278 = func_10E8A8(0xA80);
    D_001A227C = func_10E8A8(0x30B);
    D_001A2280 = func_10E8A8(0x218);
    func_111310((struct S *)object, 0x18);
}
