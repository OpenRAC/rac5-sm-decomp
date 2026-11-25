/* LEVEL_24:0x0C1350 -- placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_12B178(struct Obj *p);
extern int func_127FB0(int id);
extern void func_0D08A8(int a, int b, int c, int d);
extern void func_0D08E0(int a);

void func_0C1350(struct Obj *p)
{
    func_12B178(p);
    func_0D08A8(0, func_127FB0(0xA6C), 0, 0);
    func_0D08E0(10);
}
