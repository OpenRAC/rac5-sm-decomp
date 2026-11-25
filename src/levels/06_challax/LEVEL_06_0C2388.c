/* LEVEL_06:0x0C2388 -- placement copy of LEVEL_24_0C1350.c: placement copy of LEVEL_01_0C7A88.c: runs the setup helper on the object, then fires the two follow-up calls. */
struct Obj;
extern void func_12BD48(struct Obj *p);
extern int func_128B80(int id);
extern void func_0D1850(int a, int b, int c, int d);
extern void func_0D1888(int a);

void func_0C2388(struct Obj *p)
{
    func_12BD48(p);
    func_0D1850(0, func_128B80(0xA6C), 0, 0);
    func_0D1888(10);
}
