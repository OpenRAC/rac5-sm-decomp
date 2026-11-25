/* LEVEL_09:0x0C4FA0 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern char D_001EAA10;
extern void func_12E610(struct Obj *p);
extern int func_12B448(int id);
extern void func_12E660(struct S *p, int v);

void func_0C4FA0(struct Obj *obj)
{
    func_12E610(obj);
    D_001EAA00 = func_12B448(0xA5A);
    D_001EAA04 = func_12B448(0x30B);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 1;
    func_12E660((struct S *)obj, 0x18);
}
