/* LEVEL_18:0x0B5938 -- placement copy of LEVEL_24_0C15B8.c: placement copy of LEVEL_01_0C7CF0.c: runs the setup helper, loads four resources into globals and registers the object. */
struct Obj;
struct S;
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern char D_001B0108;
extern void func_1109F8(struct Obj *p);
extern int func_10DFE0(int id);
extern void func_110A48(struct S *p, int v);

void func_0B5938(struct Obj *obj)
{
    func_1109F8(obj);
    D_001B00F8 = func_10DFE0(0xA5A);
    D_001B00FC = func_10DFE0(0x30B);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 1;
    func_110A48((struct S *)obj, 0x18);
}
