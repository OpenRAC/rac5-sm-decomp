/* LEVEL_23:0x0BF2C8 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern char D_001D4010;

struct Obj;
extern void func_126DF0(struct Obj *p);
extern int func_123C28(int id);
extern void func_126E40(struct Obj *p, int v);

void func_0BF2C8(struct Obj *o)
{
    func_126DF0(o);
    D_001D4000 = func_123C28(0xA8A);
    D_001D4004 = func_123C28(0x327);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 0;
    func_126E40(o, 0x18);
}
