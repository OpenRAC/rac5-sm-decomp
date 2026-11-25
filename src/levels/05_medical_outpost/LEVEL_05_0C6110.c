/* LEVEL_05:0x0C6110 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern unsigned char D_001EFF90;

extern void func_130FF0(struct Obj *p);
extern int func_12DE28(int a0);
extern void func_131040(struct S *p, int v);

void func_0C6110(struct Obj *o)
{
    func_130FF0(o);
    D_001EFF80 = func_12DE28(0xA5E);
    D_001EFF84 = func_12DE28(0x30A);
    D_001EFF88 = func_12DE28(0x218);
    D_001EFF90 = 1;
    func_131040((struct S *)o, 0x18);
}
