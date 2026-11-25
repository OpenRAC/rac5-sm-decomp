/* LEVEL_06:0x0C2468 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern unsigned char D_001EFB10;

extern void func_12BD48(struct Obj *p);
extern int func_128B80(int a0);
extern void func_12BD98(struct S *p, int v);

void func_0C2468(struct Obj *o)
{
    func_12BD48(o);
    D_001EFB00 = func_128B80(0xA5E);
    D_001EFB04 = func_128B80(0x30A);
    D_001EFB08 = func_128B80(0x218);
    D_001EFB10 = 1;
    func_12BD98((struct S *)o, 0x18);
}
