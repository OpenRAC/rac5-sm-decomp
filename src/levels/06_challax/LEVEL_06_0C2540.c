/* LEVEL_06:0x0C2540 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern void func_12BD48(struct Obj *p);
extern void func_028728(int i);
extern int func_128B80(int id);
extern void func_12BD98(struct S *p, int v);

void func_0C2540(struct Obj *object)
{
    func_12BD48(object);
    func_028728(0xB);
    D_001EFB00 = func_128B80(0xA80);
    D_001EFB04 = func_128B80(0x30B);
    D_001EFB08 = func_128B80(0x218);
    func_12BD98((struct S *)object, 0x18);
}
