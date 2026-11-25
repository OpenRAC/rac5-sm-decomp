/* LEVEL_19:0x0B6188 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern void func_1123E8(struct Obj *p);
extern void func_027930(int i);
extern int func_10F9D0(int id);
extern void func_112438(struct S *p, int v);

void func_0B6188(struct Obj *object)
{
    func_1123E8(object);
    func_027930(0xB);
    D_001AFDF8 = func_10F9D0(0xA80);
    D_001AFDFC = func_10F9D0(0x30B);
    D_001AFE00 = func_10F9D0(0x218);
    func_112438((struct S *)object, 0x18);
}
