/* LEVEL_09:0x0C4D38 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_12E610(struct Obj *p);
extern int func_12B448(int id);
extern void func_0D4200(int a, int b, int c, int d);
extern void func_0D4238(int a);

void func_0C4D38(struct Obj *p)
{
    func_12E610(p);
    func_0D4200(0, func_12B448(0xA6C), 0, 0);
    func_0D4238(10);
}
