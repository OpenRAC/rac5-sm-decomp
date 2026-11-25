/* LEVEL_23:0x0BF218 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_126DF0(struct Obj *p);
extern int func_123C28(int key);
extern void func_126E40(struct S *p, int v);
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern unsigned char D_001D4010;

void func_0BF218(struct Obj *o)
{
    func_126DF0(o);
    D_001D4000 = func_123C28(0xA87);
    D_001D4004 = func_123C28(0x327);
    D_001D4008 = func_123C28(0x218);
    D_001D4010 = 0;
    func_126E40((struct S *)o, 0x18);
}
