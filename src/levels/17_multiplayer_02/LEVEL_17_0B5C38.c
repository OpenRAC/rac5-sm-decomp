/* LEVEL_17:0x0B5C38 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_1112C0(struct Obj *p);
extern int func_10E8A8(int id);
extern void func_0C5B88(int a, int b, int c, int d);
extern void func_0C5BC0(int a);

void func_0B5C38(struct Obj *p)
{
    func_1112C0(p);
    func_0C5B88(0, func_10E8A8(0xA6C), 0, 0);
    func_0C5BC0(10);
}
