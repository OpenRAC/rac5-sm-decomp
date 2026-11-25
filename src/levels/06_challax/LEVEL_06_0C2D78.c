/* LEVEL_06:0x0C2D78 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_12BD48(struct Obj *p);
extern int func_128B80(int key);
extern void func_12BD98(struct S *p, int v);
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern unsigned char D_001EFB10;

void func_0C2D78(struct Obj *o)
{
    func_12BD48(o);
    D_001EFB00 = func_128B80(0xA87);
    D_001EFB04 = func_128B80(0x327);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 0;
    func_12BD98((struct S *)o, 0x18);
}
