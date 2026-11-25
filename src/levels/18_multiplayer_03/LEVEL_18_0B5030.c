/* LEVEL_18:0x0B5030 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern char D_001B0108;

struct Obj {
    char pad00[0x10];
};

extern void func_1109F8(struct Obj *p);
extern int func_10DFE0(int id);
extern void func_110A48(struct Obj *p, int v);

void func_0B5030(struct Obj *o)
{
    func_1109F8(o);
    D_001B00F8 = func_10DFE0(0xA85);
    D_001B00FC = func_10DFE0(0x30A);
    D_001B0100 = func_10DFE0(0x219);
    D_001B0108 = 0;
    func_110A48(o, 0x18);
}
