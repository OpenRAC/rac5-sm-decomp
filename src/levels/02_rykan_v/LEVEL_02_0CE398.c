/* LEVEL_02:0x0CE398 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_13BA28(struct Obj *p);
extern int func_138860(int id);
extern void func_0DD8E0(int a, int b, int c, int d);
extern void func_0DD918(int a);

void func_0CE398(struct Obj *p)
{
    func_13BA28(p);
    func_0DD8E0(0, func_138860(0xA6C), 0, 0);
    func_0DD918(10);
}
