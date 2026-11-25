/* LEVEL_15:0x0A8338 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern char D_00155890;
extern void func_0F4540(struct Obj *p);
extern int func_0F1378(int id);
extern void func_0F4590(struct S *p, int v);

void func_0A8338(struct Obj *obj)
{
    func_0F4540(obj);
    D_00155880 = func_0F1378(0xA5A);
    D_00155884 = func_0F1378(0x30B);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 1;
    func_0F4590((struct S *)obj, 0x18);
}
