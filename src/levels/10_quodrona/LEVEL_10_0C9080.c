/* LEVEL_10:0x0C9080 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern void func_1334F8(struct Obj *p);
extern void func_02A118(int i);
extern int func_130310(int id);
extern void func_133548(struct S *p, int v);

void func_0C9080(struct Obj *object)
{
    func_1334F8(object);
    func_02A118(0xB);
    D_00209C00 = func_130310(0xA80);
    D_00209C04 = func_130310(0x30B);
    D_00209C08 = func_130310(0x218);
    func_133548((struct S *)object, 0x18);
}
