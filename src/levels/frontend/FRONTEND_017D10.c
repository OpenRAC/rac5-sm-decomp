/* FRONTEND:0x017D10 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern char D_00030490;
extern void func_022938(struct Obj *p);
extern int func_01F778(int id);
extern void func_022988(struct S *p, int v);

void func_017D10(struct Obj *obj)
{
    func_022938(obj);
    D_00030480 = func_01F778(0xA5A);
    D_00030484 = func_01F778(0x30B);
    D_00030488 = func_01F778(0x218);
    D_00030490 = 1;
    func_022988((struct S *)obj, 0x18);
}
