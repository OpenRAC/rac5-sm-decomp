/* LEVEL_24:0x0C15B8 -- placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern char D_001D1890;
extern void func_12B178(struct Obj *p);
extern int func_127FB0(int id);
extern void func_12B1C8(struct S *p, int v);

void func_0C15B8(struct Obj *obj)
{
    func_12B178(obj);
    D_001D1880 = func_127FB0(0xA5A);
    D_001D1884 = func_127FB0(0x30B);
    D_001D1888 = func_127FB0(0x218);
    D_001D1890 = 1;
    func_12B1C8((struct S *)obj, 0x18);
}
