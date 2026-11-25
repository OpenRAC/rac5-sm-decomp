/* LEVEL_08:0x0D29B0 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_146BB0(struct Obj *p);
extern int func_1439E8(int id);
extern void func_0E1F10(int a, int b, int c, int d);
extern void func_0E1F48(int a);

void func_0D29B0(struct Obj *p)
{
    func_146BB0(p);
    func_0E1F10(0, func_1439E8(0xA6C), 0, 0);
    func_0E1F48(10);
}
