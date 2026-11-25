/* LEVEL_01:0x0C7A88 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_135678(struct Obj *p);
extern int func_1324B0(int id);
extern void func_0D6F50(int a, int b, int c, int d);
extern void func_0D6F88(int a);

void func_0C7A88(struct Obj *p)
{
    func_135678(p);
    func_0D6F50(0, func_1324B0(0xA6C), 0, 0);
    func_0D6F88(10);
}
