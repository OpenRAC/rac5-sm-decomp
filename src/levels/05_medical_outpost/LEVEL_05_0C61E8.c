/* LEVEL_05:0x0C61E8 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern void func_130FF0(struct Obj *p);
extern void func_028FB8(int i);
extern int func_12DE28(int id);
extern void func_131040(struct S *p, int v);

void func_0C61E8(struct Obj *object)
{
    func_130FF0(object);
    func_028FB8(0xB);
    D_001EFF80 = func_12DE28(0xA80);
    D_001EFF84 = func_12DE28(0x30B);
    D_001EFF88 = func_12DE28(0x218);
    func_131040((struct S *)object, 0x18);
}
