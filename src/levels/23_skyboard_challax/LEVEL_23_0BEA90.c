/* LEVEL_23:0x0BEA90 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern char D_001D4010;
extern void func_126DF0(struct Obj *p);
extern int func_123C28(int id);
extern void func_126E40(struct S *p, int v);

void func_0BEA90(struct Obj *obj)
{
    func_126DF0(obj);
    D_001D4000 = func_123C28(0xA5A);
    D_001D4004 = func_123C28(0x30B);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 1;
    func_126E40((struct S *)obj, 0x18);
}
