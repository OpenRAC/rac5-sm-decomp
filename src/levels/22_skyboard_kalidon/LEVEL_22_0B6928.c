/* LEVEL_22:0x0B6928 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_10CB48(struct Obj *p);
extern int func_109980(int key);
extern void func_10CB98(struct S *p, int v);
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern unsigned char D_0015FF90;

void func_0B6928(struct Obj *o)
{
    func_10CB48(o);
    D_0015FF80 = func_109980(0xA87);
    D_0015FF84 = func_109980(0x327);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 0;
    func_10CB98((struct S *)o, 0x18);
}
