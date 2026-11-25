/* LEVEL_18:0x0B57B0 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern unsigned char D_001B0108;

extern void func_1109F8(struct Obj *p);
extern int func_10DFE0(int a0);
extern void func_110A48(struct S *p, int v);

void func_0B57B0(struct Obj *o)
{
    func_1109F8(o);
    D_001B00F8 = func_10DFE0(0xA5E);
    D_001B00FC = func_10DFE0(0x30A);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 1;
    func_110A48((struct S *)o, 0x18);
}
