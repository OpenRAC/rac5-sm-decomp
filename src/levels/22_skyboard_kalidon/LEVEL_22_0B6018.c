/* LEVEL_22:0x0B6018 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern unsigned char D_0015FF90;

extern void func_10CB48(struct Obj *p);
extern int func_109980(int a0);
extern void func_10CB98(struct S *p, int v);

void func_0B6018(struct Obj *o)
{
    func_10CB48(o);
    D_0015FF80 = func_109980(0xA5E);
    D_0015FF84 = func_109980(0x30A);
    D_0015FF88 = func_109980(0x218);
    D_0015FF90 = 1;
    func_10CB98((struct S *)o, 0x18);
}
