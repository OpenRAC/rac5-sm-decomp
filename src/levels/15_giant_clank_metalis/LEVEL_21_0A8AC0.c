/* LEVEL_21:0x0A8AC0 -- placement copy of LEVEL_24_0C1D40.c: placement copy of LEVEL_01_0C8478.c: level setup: resets the object, caches three keyed lookups, clears the ready byte and marks the object's slot 0x18. */
struct Obj;
struct S;

extern void func_0F4540(struct Obj *p);
extern int func_0F1378(int key);
extern void func_0F4590(struct S *p, int v);
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern unsigned char D_00155890;

void func_0A8AC0(struct Obj *o)
{
    func_0F4540(o);
    D_00155880 = func_0F1378(0xA87);
    D_00155884 = func_0F1378(0x327);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 0;
    func_0F4590((struct S *)o, 0x18);
}
