/* LEVEL_15:0x0A81B0 -- placement copy of LEVEL_24_0C1430.c: placement copy of LEVEL_01_0C7B68.c: resets the object, looks up three table entries into globals, sets the ready flag and finishes with the sub-record helper. */
struct Obj;
struct S;

extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern unsigned char D_00155890;

extern void func_0F4540(struct Obj *p);
extern int func_0F1378(int a0);
extern void func_0F4590(struct S *p, int v);

void func_0A81B0(struct Obj *o)
{
    func_0F4540(o);
    D_00155880 = func_0F1378(0xA5E);
    D_00155884 = func_0F1378(0x30A);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 1;
    func_0F4590((struct S *)o, 0x18);
}
