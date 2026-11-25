/* LEVEL_19:0x0B69C0 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_1123E8(struct Obj *p);
extern int func_10F9D0(int key);
extern void func_112438(struct S *p, int v);
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern unsigned char D_001AFE08;

void func_0B69C0(struct Obj *o)
{
    func_1123E8(o);
    D_001AFDF8 = func_10F9D0(0xA87);
    D_001AFDFC = func_10F9D0(0x327);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 0;
    func_112438((struct S *)o, 0x18);
}
