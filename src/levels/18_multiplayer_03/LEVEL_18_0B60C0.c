/* LEVEL_18:0x0B60C0 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_1109F8(struct Obj *p);
extern int func_10DFE0(int key);
extern void func_110A48(struct S *p, int v);
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern unsigned char D_001B0108;

void func_0B60C0(struct Obj *o)
{
    func_1109F8(o);
    D_001B00F8 = func_10DFE0(0xA87);
    D_001B00FC = func_10DFE0(0x327);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 0;
    func_110A48((struct S *)o, 0x18);
}
