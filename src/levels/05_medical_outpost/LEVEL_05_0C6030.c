/* LEVEL_05:0x0C6030 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_130FF0(struct Obj *p);
extern int func_12DE28(int id);
extern void func_0D54F8(int a, int b, int c, int d);
extern void func_0D5530(int a);

void func_0C6030(struct Obj *p)
{
    func_130FF0(p);
    func_0D54F8(0, func_12DE28(0xA6C), 0, 0);
    func_0D5530(10);
}
