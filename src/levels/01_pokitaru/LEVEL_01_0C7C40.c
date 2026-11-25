/* LEVEL_01:0x0C7C40 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern void func_135678(struct Obj *p);
extern void func_02A340(int i);
extern int func_1324B0(int id);
extern void func_1356C8(struct S *p, int v);

void func_0C7C40(struct Obj *object)
{
    func_135678(object);
    func_02A340(0xB);
    D_00200C00 = func_1324B0(0xA80);
    D_00200C04 = func_1324B0(0x30B);
    D_00200C08 = func_1324B0(0x218);
    func_1356C8((struct S *)object, 0x18);
}
