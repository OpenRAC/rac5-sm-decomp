/* LEVEL_04:0x0CD458 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern void func_141AF8(struct Obj *p);
extern void func_029DE8(int i);
extern int func_13E930(int id);
extern void func_141B48(struct S *p, int v);

void func_0CD458(struct Obj *object)
{
    func_141AF8(object);
    func_029DE8(0xB);
    D_0021A0C0 = func_13E930(0xA80);
    D_0021A0C4 = func_13E930(0x30B);
    D_0021A0C8 = func_13E930(0x218);
    func_141B48((struct S *)object, 0x18);
}
