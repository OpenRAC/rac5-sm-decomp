/* LEVEL_20:0x0A0E90 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern char D_00111368;
extern void func_0E4B30(struct Obj *p);
extern int func_0E2118(int id);
extern void func_0E4B80(struct S *p, int v);

void func_0A0E90(struct Obj *obj)
{
    func_0E4B30(obj);
    D_00111358 = func_0E2118(0xA5A);
    D_0011135C = func_0E2118(0x30B);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 1;
    func_0E4B80((struct S *)obj, 0x18);
}
