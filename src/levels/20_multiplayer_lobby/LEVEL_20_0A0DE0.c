/* LEVEL_20:0x0A0DE0 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern void func_0E4B30(struct Obj *p);
extern void func_024890(int i);
extern int func_0E2118(int id);
extern void func_0E4B80(struct S *p, int v);

void func_0A0DE0(struct Obj *object)
{
    func_0E4B30(object);
    func_024890(0xB);
    D_00111358 = func_0E2118(0xA80);
    D_0011135C = func_0E2118(0x30B);
    D_00111360 = func_0E2118(0x218);
    func_0E4B80((struct S *)object, 0x18);
}
