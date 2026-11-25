/* LEVEL_05:0x0C6298 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern char D_001EFF90;
extern void func_130FF0(struct Obj *p);
extern int func_12DE28(int id);
extern void func_131040(struct S *p, int v);

void func_0C6298(struct Obj *obj)
{
    func_130FF0(obj);
    D_001EFF80 = func_12DE28(0xA5A);
    D_001EFF84 = func_12DE28(0x30B);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 1;
    func_131040((struct S *)obj, 0x18);
}
