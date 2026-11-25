/* LEVEL_07:0x0C9D50 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern char D_00214F10;
extern void func_138678(struct Obj *p);
extern int func_1354B0(int id);
extern void func_1386C8(struct S *p, int v);

void func_0C9D50(struct Obj *obj)
{
    func_138678(obj);
    D_00214F00 = func_1354B0(0xA5A);
    D_00214F04 = func_1354B0(0x30B);
    D_00214F08 = func_1354B0(0x218);
    D_00214F10 = 1;
    func_1386C8((struct S *)obj, 0x18);
}
