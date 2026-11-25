/* LEVEL_17:0x0B6628 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_1112C0(struct Obj *p);
extern int func_10E8A8(int key);
extern void func_111310(struct S *p, int v);
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern unsigned char D_001A2288;

void func_0B6628(struct Obj *o)
{
    func_1112C0(o);
    D_001A2278 = func_10E8A8(0xA87);
    D_001A227C = func_10E8A8(0x327);
    D_001A2280 = func_10E8A8(0x218);
    D_001A2288 = 0;
    func_111310((struct S *)o, 0x18);
}
