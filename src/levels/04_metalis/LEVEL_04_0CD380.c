/* LEVEL_04:0x0CD380 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern unsigned char D_0021A0D0;

extern void func_141AF8(struct Obj *p);
extern int func_13E930(int a0);
extern void func_141B48(struct S *p, int v);

void func_0CD380(struct Obj *o)
{
    func_141AF8(o);
    D_0021A0C0 = func_13E930(0xA5E);
    D_0021A0C4 = func_13E930(0x30A);
    D_0021A0C8 = func_13E930(0x218);
    D_0021A0D0 = 1;
    func_141B48((struct S *)o, 0x18);
}
