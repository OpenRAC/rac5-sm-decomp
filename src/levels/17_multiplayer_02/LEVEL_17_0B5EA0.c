/* LEVEL_17:0x0B5EA0 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern char D_001A2288;
extern void func_1112C0(struct Obj *p);
extern int func_10E8A8(int id);
extern void func_111310(struct S *p, int v);

void func_0B5EA0(struct Obj *obj)
{
    func_1112C0(obj);
    D_001A2278 = func_10E8A8(0xA5A);
    D_001A227C = func_10E8A8(0x30B);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 1;
    func_111310((struct S *)obj, 0x18);
}
