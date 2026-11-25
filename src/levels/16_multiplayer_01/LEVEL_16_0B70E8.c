/* LEVEL_16:0x0B70E8 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_111D48(struct Obj *p);
extern int func_10F330(int key);
extern void func_111D98(struct S *p, int v);
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern unsigned char D_001AEC88;

void func_0B70E8(struct Obj *o)
{
    func_111D48(o);
    D_001AEC78 = func_10F330(0xA87);
    D_001AEC7C = func_10F330(0x327);
    D_001AEC80 = func_10F330(0x218);
    D_001AEC88 = 0;
    func_111D98((struct S *)o, 0x18);
}
