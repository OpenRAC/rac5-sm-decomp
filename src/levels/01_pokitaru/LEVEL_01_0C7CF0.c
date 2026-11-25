/* LEVEL_01:0x0C7CF0 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern char D_00200C10;
extern void func_135678(struct Obj *p);
extern int func_1324B0(int id);
extern void func_1356C8(struct S *p, int v);

void func_0C7CF0(struct Obj *obj)
{
    func_135678(obj);
    D_00200C00 = func_1324B0(0xA5A);
    D_00200C04 = func_1324B0(0x30B);
    D_00200C08 = func_1324B0(0x218);
    D_00200C10 = 1;
    func_1356C8((struct S *)obj, 0x18);
}
