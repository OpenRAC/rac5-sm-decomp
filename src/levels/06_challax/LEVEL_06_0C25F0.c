/* LEVEL_06:0x0C25F0 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern char D_001EFB10;
extern void func_12BD48(struct Obj *p);
extern int func_128B80(int id);
extern void func_12BD98(struct S *p, int v);

void func_0C25F0(struct Obj *obj)
{
    func_12BD48(obj);
    D_001EFB00 = func_128B80(0xA5A);
    D_001EFB04 = func_128B80(0x30B);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 1;
    func_12BD98((struct S *)obj, 0x18);
}
