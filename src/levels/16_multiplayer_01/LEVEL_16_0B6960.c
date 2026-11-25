/* LEVEL_16:0x0B6960 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern char D_001AEC88;
extern void func_111D48(struct Obj *p);
extern int func_10F330(int id);
extern void func_111D98(struct S *p, int v);

void func_0B6960(struct Obj *obj)
{
    func_111D48(obj);
    D_001AEC78 = func_10F330(0xA5A);
    D_001AEC7C = func_10F330(0x30B);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 1;
    func_111D98((struct S *)obj, 0x18);
}
