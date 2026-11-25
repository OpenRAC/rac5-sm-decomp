/* LEVEL_16:0x0B66F8 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_111D48(struct Obj *p);
extern int func_10F330(int id);
extern void func_0C6648(int a, int b, int c, int d);
extern void func_0C6680(int a);

void func_0B66F8(struct Obj *p)
{
    func_111D48(p);
    func_0C6648(0, func_10F330(0xA6C), 0, 0);
    func_0C6680(10);
}
