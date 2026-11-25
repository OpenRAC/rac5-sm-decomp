/* LEVEL_22:0x0B5F38 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_10CB48(struct Obj *p);
extern int func_109980(int id);
extern void func_0C5490(int a, int b, int c, int d);
extern void func_0C54C8(int a);

void func_0B5F38(struct Obj *p)
{
    func_10CB48(p);
    func_0C5490(0, func_109980(0xA6C), 0, 0);
    func_0C54C8(10);
}
