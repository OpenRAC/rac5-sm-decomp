/* LEVEL_23:0x0BE828 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_126DF0(struct Obj *p);
extern int func_123C28(int id);
extern void func_0CDD80(int a, int b, int c, int d);
extern void func_0CDDB8(int a);

void func_0BE828(struct Obj *p)
{
    func_126DF0(p);
    func_0CDD80(0, func_123C28(0xA6C), 0, 0);
    func_0CDDB8(10);
}
