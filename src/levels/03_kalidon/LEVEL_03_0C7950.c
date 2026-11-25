/* LEVEL_03:0x0C7950 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern unsigned char D_00219290;

extern void func_133A40(struct Obj *p);
extern int func_130878(int a0);
extern void func_133A90(struct S *p, int v);

void func_0C7950(struct Obj *o)
{
    func_133A40(o);
    D_00219280 = func_130878(0xA5E);
    D_00219284 = func_130878(0x30A);
    D_00219288 = func_130878(0x218);
    D_00219290 = 1;
    func_133A90((struct S *)o, 0x18);
}
