/* LEVEL_18:0x0B6220 -- placement copy of LEVEL_24_0C1EA0.c: placement copy of LEVEL_01_0C85D8.c: resets the object, looks up three entries into globals, clears a byte flag and sets the object to state 0x18. */
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern unsigned char D_001B0108;

struct Obj;
struct S;
extern void func_1109F8(struct Obj *p);
extern int func_10DFE0(int index);
extern void func_110A48(struct S *p, int v);

void func_0B6220(struct Obj *p)
{
    func_1109F8(p);
    D_001B00F8 = func_10DFE0(0xA86);
    D_001B00FC = func_10DFE0(0x327);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 0;
    func_110A48((struct S *)p, 0x18);
}
