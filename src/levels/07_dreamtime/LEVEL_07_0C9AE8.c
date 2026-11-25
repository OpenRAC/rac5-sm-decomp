/* LEVEL_07:0x0C9AE8 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_138678(struct Obj *p);
extern int func_1354B0(int id);
extern void func_0D8FB0(int a, int b, int c, int d);
extern void func_0D8FE8(int a);

void func_0C9AE8(struct Obj *p)
{
    func_138678(p);
    func_0D8FB0(0, func_1354B0(0xA6C), 0, 0);
    func_0D8FE8(10);
}
