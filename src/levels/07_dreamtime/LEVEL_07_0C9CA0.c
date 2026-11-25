/* LEVEL_07:0x0C9CA0 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern void func_138678(struct Obj *p);
extern void func_02A680(int i);
extern int func_1354B0(int id);
extern void func_1386C8(struct S *p, int v);

void func_0C9CA0(struct Obj *object)
{
    func_138678(object);
    func_02A680(0xB);
    D_00214F00 = func_1354B0(0xA80);
    D_00214F04 = func_1354B0(0x30B);
    D_00214F08 = func_1354B0(0x218);
    func_1386C8((struct S *)object, 0x18);
}
