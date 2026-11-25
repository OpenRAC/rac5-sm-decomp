/* LEVEL_18:0x0B6170 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern char D_001B0108;

struct Obj;
extern void func_1109F8(struct Obj *p);
extern int func_10DFE0(int id);
extern void func_110A48(struct Obj *p, int v);

void func_0B6170(struct Obj *o)
{
    func_1109F8(o);
    D_001B00F8 = func_10DFE0(0xA8A);
    D_001B00FC = func_10DFE0(0x327);
    D_001B0100 = func_10DFE0(0x218);
    D_001B0108 = 0;
    func_110A48(o, 0x18);
}
