/* LEVEL_19:0x0B5FD0 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_1123E8(struct Obj *p);
extern int func_10F9D0(int id);
extern void func_0C5F20(int a, int b, int c, int d);
extern void func_0C5F58(int a);

void func_0B5FD0(struct Obj *p)
{
    func_1123E8(p);
    func_0C5F20(0, func_10F9D0(0xA6C), 0, 0);
    func_0C5F58(10);
}
