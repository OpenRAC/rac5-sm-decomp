/* LEVEL_09:0x0C5728 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_12E610(struct Obj *p);
extern int func_12B448(int key);
extern void func_12E660(struct S *p, int v);
extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern unsigned char D_001EAA10;

void func_0C5728(struct Obj *o)
{
    func_12E610(o);
    D_001EAA00 = func_12B448(0xA87);
    D_001EAA04 = func_12B448(0x327);
    D_001EAA08 = func_12B448(0x218);
    D_001EAA10 = 0;
    func_12E660((struct S *)o, 0x18);
}
