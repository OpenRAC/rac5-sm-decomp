/* LEVEL_23:0x0BE188 -- placement copy of LEVEL_24_0C0CB0.c: placement copy of LEVEL_01_0C73E8.c: resets the object, stores three looked-up ids and a cleared byte in globals and runs the object step 0x18. */
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern char D_001D4010;

struct Obj {
    char pad00[0x10];
};

extern void func_126DF0(struct Obj *p);
extern int func_123C28(int id);
extern void func_126E40(struct Obj *p, int v);

void func_0BE188(struct Obj *o)
{
    func_126DF0(o);
    D_001D4000 = func_123C28(0xA85);
    D_001D4004 = func_123C28(0x30A);
    D_001D4008 = func_123C28(0x219);
    D_001D4010 = 0;
    func_126E40(o, 0x18);
}
