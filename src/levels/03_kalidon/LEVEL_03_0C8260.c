/* LEVEL_03:0x0C8260 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_133A40(struct Obj *p);
extern int func_130878(int key);
extern void func_133A90(struct S *p, int v);
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern unsigned char D_00219290;

void func_0C8260(struct Obj *o)
{
    func_133A40(o);
    D_00219280 = func_130878(0xA87);
    D_00219284 = func_130878(0x327);
    D_00219288 = func_130878(0x218);
    D_00219290 = 0;
    func_133A90((struct S *)o, 0x18);
}
