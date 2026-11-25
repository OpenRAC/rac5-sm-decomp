/* LEVEL_08:0x0D2A90 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern unsigned char D_00249AD0;

extern void func_146BB0(struct Obj *p);
extern int func_1439E8(int a0);
extern void func_146C00(struct S *p, int v);

void func_0D2A90(struct Obj *o)
{
    func_146BB0(o);
    D_00249AC0 = func_1439E8(0xA5E);
    D_00249AC4 = func_1439E8(0x30A);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 1;
    func_146C00((struct S *)o, 0x18);
}
