/* LEVEL_08:0x0D33A0 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_146BB0(struct Obj *p);
extern int func_1439E8(int key);
extern void func_146C00(struct S *p, int v);
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern unsigned char D_00249AD0;

void func_0D33A0(struct Obj *o)
{
    func_146BB0(o);
    D_00249AC0 = func_1439E8(0xA87);
    D_00249AC4 = func_1439E8(0x327);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 0;
    func_146C00((struct S *)o, 0x18);
}
