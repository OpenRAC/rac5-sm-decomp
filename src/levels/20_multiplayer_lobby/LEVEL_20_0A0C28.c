/* LEVEL_20:0x0A0C28 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_0E4B30(struct Obj *p);
extern int func_0E2118(int id);
extern void func_0B0B78(int a, int b, int c, int d);
extern void func_0B0BB0(int a);

void func_0A0C28(struct Obj *p)
{
    func_0E4B30(p);
    func_0B0B78(0, func_0E2118(0xA6C), 0, 0);
    func_0B0BB0(10);
}
