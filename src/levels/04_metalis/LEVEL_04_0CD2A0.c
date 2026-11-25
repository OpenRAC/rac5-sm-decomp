/* LEVEL_04:0x0CD2A0 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_141AF8(struct Obj *p);
extern int func_13E930(int id);
extern void func_0DC800(int a, int b, int c, int d);
extern void func_0DC838(int a);

void func_0CD2A0(struct Obj *p)
{
    func_141AF8(p);
    func_0DC800(0, func_13E930(0xA6C), 0, 0);
    func_0DC838(10);
}
