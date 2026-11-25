/* LEVEL_15:0x0A8B70 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern char D_00155890;

struct Obj;
extern void func_0F4540(struct Obj *p);
extern int func_0F1378(int id);
extern void func_0F4590(struct Obj *p, int v);

void func_0A8B70(struct Obj *o)
{
    func_0F4540(o);
    D_00155880 = func_0F1378(0xA8A);
    D_00155884 = func_0F1378(0x327);
    D_00155888 = func_0F1378(0x218);
    D_00155890 = 0;
    func_0F4590(o, 0x18);
}
