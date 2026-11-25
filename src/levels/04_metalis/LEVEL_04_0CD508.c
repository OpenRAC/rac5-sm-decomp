/* LEVEL_04:0x0CD508 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern char D_0021A0D0;
extern void func_141AF8(struct Obj *p);
extern int func_13E930(int id);
extern void func_141B48(struct S *p, int v);

void func_0CD508(struct Obj *obj)
{
    func_141AF8(obj);
    D_0021A0C0 = func_13E930(0xA5A);
    D_0021A0C4 = func_13E930(0x30B);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 1;
    func_141B48((struct S *)obj, 0x18);
}
