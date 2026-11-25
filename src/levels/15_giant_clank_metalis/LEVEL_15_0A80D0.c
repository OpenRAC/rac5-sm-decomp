/* LEVEL_15:0x0A80D0 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_0F4540(struct Obj *p);
extern int func_0F1378(int id);
extern void func_0B7590(int a, int b, int c, int d);
extern void func_0B75C8(int a);

void func_0A80D0(struct Obj *p)
{
    func_0F4540(p);
    func_0B7590(0, func_0F1378(0xA6C), 0, 0);
    func_0B75C8(10);
}
