/* LEVEL_19:0x0B6238 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern char D_001AFE08;
extern void func_1123E8(struct Obj *p);
extern int func_10F9D0(int id);
extern void func_112438(struct S *p, int v);

void func_0B6238(struct Obj *obj)
{
    func_1123E8(obj);
    D_001AFDF8 = func_10F9D0(0xA5A);
    D_001AFDFC = func_10F9D0(0x30B);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 1;
    func_112438((struct S *)obj, 0x18);
}
