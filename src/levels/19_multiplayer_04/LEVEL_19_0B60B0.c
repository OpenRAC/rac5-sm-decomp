/* LEVEL_19:0x0B60B0 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern unsigned char D_001AFE08;

extern void func_1123E8(struct Obj *p);
extern int func_10F9D0(int a0);
extern void func_112438(struct S *p, int v);

void func_0B60B0(struct Obj *o)
{
    func_1123E8(o);
    D_001AFDF8 = func_10F9D0(0xA5E);
    D_001AFDFC = func_10F9D0(0x30A);
    D_001AFE00 = func_10F9D0(0x218);
    D_001AFE08 = 1;
    func_112438((struct S *)o, 0x18);
}
