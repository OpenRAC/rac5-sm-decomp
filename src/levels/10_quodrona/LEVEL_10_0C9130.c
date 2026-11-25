/* LEVEL_10:0x0C9130 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern char D_00209C10;
extern void func_1334F8(struct Obj *p);
extern int func_130310(int id);
extern void func_133548(struct S *p, int v);

void func_0C9130(struct Obj *obj)
{
    func_1334F8(obj);
    D_00209C00 = func_130310(0xA5A);
    D_00209C04 = func_130310(0x30B);
    D_00209C08 = func_130310(0x218);
    D_00209C10 = 1;
    func_133548((struct S *)obj, 0x18);
}
