/* LEVEL_20:0x0A1618 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_0E4B30(struct Obj *p);
extern int func_0E2118(int key);
extern void func_0E4B80(struct S *p, int v);
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern unsigned char D_00111368;

void func_0A1618(struct Obj *o)
{
    func_0E4B30(o);
    D_00111358 = func_0E2118(0xA87);
    D_0011135C = func_0E2118(0x327);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 0;
    func_0E4B80((struct S *)o, 0x18);
}
