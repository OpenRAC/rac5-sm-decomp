/* LEVEL_08:0x0D3450 -- placement copy of LEVEL_24_0C1DF0.c: placement copy of LEVEL_01_0C8528.c: prepares the object, caches three looked-up ids in globals, clears a flag byte and finishes with the 0x18 setup call. */
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern char D_00249AD0;

struct Obj;
extern void func_146BB0(struct Obj *p);
extern int func_1439E8(int id);
extern void func_146C00(struct Obj *p, int v);

void func_0D3450(struct Obj *o)
{
    func_146BB0(o);
    D_00249AC0 = func_1439E8(0xA8A);
    D_00249AC4 = func_1439E8(0x327);
    D_00249AC8 = func_1439E8(0x218);
    D_00249AD0 = 0;
    func_146C00(o, 0x18);
}
