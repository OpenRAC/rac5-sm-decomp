/* LEVEL_09:0x0C4EF0 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern void func_12E610(struct Obj *p);
extern void func_0291A8(int i);
extern int func_12B448(int id);
extern void func_12E660(struct S *p, int v);

void func_0C4EF0(struct Obj *object)
{
    func_12E610(object);
    func_0291A8(0xB);
    D_001EAA00 = func_12B448(0xA80);
    D_001EAA04 = func_12B448(0x30B);
    D_001EAA08 = func_12B448(0x218);
    func_12E660((struct S *)object, 0x18);
}
