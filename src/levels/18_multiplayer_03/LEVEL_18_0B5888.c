/* LEVEL_18:0x0B5888 -- placement copy of LEVEL_24_0C1508.c: placement copy of LEVEL_01_0C7C40.c: sets up an object: runs two init helpers, loads three resources into globals, and finishes with the object-specific setup. */
struct Obj;
struct S;

extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern void func_1109F8(struct Obj *p);
extern void func_027338(int i);
extern int func_10DFE0(int id);
extern void func_110A48(struct S *p, int v);

void func_0B5888(struct Obj *object)
{
    func_1109F8(object);
    func_027338(0xB);
    D_001B00F8 = func_10DFE0(0xA80);
    D_001B00FC = func_10DFE0(0x30B);
    D_001B0100 = func_10DFE0(0x218);
    func_110A48((struct S *)object, 0x18);
}
