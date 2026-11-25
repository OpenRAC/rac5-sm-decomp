/* LEVEL_05:0x0C6A20 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_130FF0(struct Obj *p);
extern int func_12DE28(int key);
extern void func_131040(struct S *p, int v);
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern unsigned char D_001EFF90;

void func_0C6A20(struct Obj *o)
{
    func_130FF0(o);
    D_001EFF80 = func_12DE28(0xA87);
    D_001EFF84 = func_12DE28(0x327);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 0;
    func_131040((struct S *)o, 0x18);
}
