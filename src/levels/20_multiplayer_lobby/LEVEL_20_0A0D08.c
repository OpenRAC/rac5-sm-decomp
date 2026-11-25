/* LEVEL_20:0x0A0D08 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern unsigned char D_00111368;

extern void func_0E4B30(struct Obj *p);
extern int func_0E2118(int a0);
extern void func_0E4B80(struct S *p, int v);

void func_0A0D08(struct Obj *o)
{
    func_0E4B30(o);
    D_00111358 = func_0E2118(0xA5E);
    D_0011135C = func_0E2118(0x30A);
    D_00111360 = func_0E2118(0x218);
    D_00111368 = 1;
    func_0E4B80((struct S *)o, 0x18);
}
