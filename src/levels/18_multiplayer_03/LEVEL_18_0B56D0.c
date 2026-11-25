/* LEVEL_18:0x0B56D0 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_1109F8(struct Obj *p);
extern int func_10DFE0(int id);
extern void func_0C5620(int a, int b, int c, int d);
extern void func_0C5658(int a);

void func_0B56D0(struct Obj *p)
{
    func_1109F8(p);
    func_0C5620(0, func_10DFE0(0xA6C), 0, 0);
    func_0C5658(10);
}
