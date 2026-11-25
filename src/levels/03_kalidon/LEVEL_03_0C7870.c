/* LEVEL_03:0x0C7870 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_133A40(struct Obj *p);
extern int func_130878(int id);
extern void func_0D6D38(int a, int b, int c, int d);
extern void func_0D6D70(int a);

void func_0C7870(struct Obj *p)
{
    func_133A40(p);
    func_0D6D38(0, func_130878(0xA6C), 0, 0);
    func_0D6D70(10);
}
