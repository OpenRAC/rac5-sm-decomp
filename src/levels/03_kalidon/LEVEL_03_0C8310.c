/* LEVEL_03:0x0C8310 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern char D_00219290;

struct Obj;
extern void func_133A40(struct Obj *p);
extern int func_130878(int id);
extern void func_133A90(struct Obj *p, int v);

void func_0C8310(struct Obj *o)
{
    func_133A40(o);
    D_00219280 = func_130878(0xA8A);
    D_00219284 = func_130878(0x327);
    D_00219288 = func_130878(0x218);
    D_00219290 = 0;
    func_133A90(o, 0x18);
}
